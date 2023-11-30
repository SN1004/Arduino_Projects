#include <LSM6.h>
#include <Wire.h>

#define omot1  10
#define omot2  11
#define cmot11  8
#define cmot12  9
#define cmot21  12
#define cmot22  13

LSM6 imu;

long sumx, sumy, sumz; 
long gyroX, gyroY, gyroZ;
long rotX, rotY, rotZ;
long dx=0, dy=0, dz=0;
long eingyrox , eingyroy , eingyroz;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  digitalWrite(omot1 , OUTPUT);
  digitalWrite(omot2, OUTPUT);
  digitalWrite(cmot11 ,OUTPUT);
  digitalWrite(cmot22 , OUTPUT);
  digitalWrite(cmot21 ,OUTPUT);
  digitalWrite();
   if (!imu.init())
  {
    Serial.println("Failed to detect and initialize IMU!");
    while (1);
  }
  imu.enableDefault();

  looping () ;
}


void loop() {

 rotX = imu.g.x - eingyrox;
 rotY = imu.g.y - eingyroy;
 rotZ = imu.g.z - eingyroz;


 dx = dx + rotX / 10 ;
 dy = dy + rotY / 10 ;
 dz = dz + rotZ / 10 ;

 
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

void looping (){
 
  for (int i =1 ; i<=5; i++ ){
    sumx=sumx+imu.g.x;
    sumy=sumy+imu.g.y;
    sumz=sumz+imu.g.z;
    }
    
    eingyrox = sumx / 5 ;
    eingyroy = sumy / 5 ; 
    eingyroz = sumz / 5 ; 

}
