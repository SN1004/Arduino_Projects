/*MOTOR CONTROL BY L293D IC*/
#include <Wire.h>

#define omot1  10
#define omot2  11
#define cmot11  8
#define cmot12  9
#define cmot21  12
#define cmot22  13

long accelX, accelY, accelZ;
float gForceX, gForceY, gForceZ;

long gyroX, gyroY, gyroZ;
float rotX, rotY, rotZ;
long dx, dy, dz;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  setupMPU();
}


void loop() {
  recordGyroRegisters();
  printData();
  delay(100);
  if (dy > 20) {                   //using gyroscope as steering 
    if (dx < 20 && dx > -20) {       //motor 1 on right and motor 2 on left
      analogWrite(omot1, 255);       //driving straight
      analogWrite(omot2, 255);

      digitalWrite(cmot11, HIGH);
      digitalWrite(cmot12, LOW);
      digitalWrite(cmot21, HIGH);
      digitalWrite(cmot22, LOW);
      delay(100);
    }
    if(dx>20){                       //turning right slightly while moving forward
    analogWrite(omot1, 100);
    analogWrite(omot2, 255);

    digitalWrite(cmot11, HIGH);
    digitalWrite(cmot12, LOW);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);
    delay(100);

      }
    if(dx<-20){                       //turning left slightly while moving forward
    analogWrite(omot1, 255);
    analogWrite(omot2, 100);

    digitalWrite(cmot11, HIGH);
    digitalWrite(cmot12, LOW);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);
    delay(100);
    }

  }
  if (dy < -20) {
    if(dx<20 && dx>-20){
    analogWrite(omot1, 255);
    analogWrite(omot2, 255);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, LOW);
    digitalWrite(cmot22, HIGH);
    delay(100);
    }
    
    if(dx>20){                       //turning right slightly while moving backward
    analogWrite(omot1, 100);
    analogWrite(omot2, 255);

     digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, LOW);
    digitalWrite(cmot22, HIGH);
    delay(100);
    
      }
    if(dx<-20){                       //turning left slightly while moving backward
    analogWrite(omot1, 255);
    analogWrite(omot2, 100);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, LOW);
    digitalWrite(cmot22, HIGH);
    delay(100);
    }
  }
  if (dz > 20) {
    analogWrite(omot1, 255);
    analogWrite(omot2, 255);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);

    delay(500);

    analogWrite(omot1, 0);
    analogWrite(omot2, 0);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);

  }
  if (dz < -20) {
    analogWrite(omot1, 255);
    analogWrite(omot2, 255);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);

    delay(500);

    analogWrite(omot1, 0);
    analogWrite(omot2, 0);

    digitalWrite(cmot11, LOW);
    digitalWrite(cmot12, HIGH);
    digitalWrite(cmot21, HIGH);
    digitalWrite(cmot22, LOW);

  }
}

void setupMPU() {
  Wire.beginTransmission(0b1101000); 
  Wire.write(0x6B); 
  Wire.write(0b00000000);
  Wire.endTransmission();
  Wire.beginTransmission(0b1101000); 
  Wire.write(0x1B);
  Wire.write(0x11100000); 
  Wire.endTransmission();
}



void recordGyroRegisters() {
  Wire.beginTransmission(0b1101000); 
  Wire.write(0x43);
  Wire.endTransmission();
  Wire.requestFrom(0b1101000, 6); 
  while (Wire.available() < 6);
  gyroX = Wire.read() << 8 | Wire.read();
  gyroY = Wire.read() << 8 | Wire.read(); 
  gyroZ = Wire.read() << 8 | Wire.read();
  processGyroData();
}

void processGyroData() {

  
  
  rotX = gyroX / 131.0;
  rotY = gyroY / 131.0;
  rotZ = gyroZ / 131.0; 
  dx = dx + rotX / 10;
  dy = dy + rotY / 10;
  dz = dz + rotZ / 10;
}

void printData() {


  Serial.print("Gyro (deg)");
  Serial.print(" X=");
  Serial.print(dx);
  Serial.print(" Y=");
  Serial.print(dy);
  Serial.print(" Z=");
  Serial.println(dz);
  delay(300);
}
  






