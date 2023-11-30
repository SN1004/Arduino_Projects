#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
int redled = 6 ;
int redlight ;
int greenled = 11 ; 
int greenlight ; 
int trigpin = 13 ; 
int echopin = 12 ;
float distance ;
float speedofsound = 320.50 ;
float pulsetime;
void setup() {
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("Target Distance: ");
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
 Serial.begin(9600);
}

void loop() {

  digitalWrite(trigpin,LOW);
 delay(20);
 digitalWrite(trigpin,HIGH);
delayMicroseconds(20000);
 digitalWrite(trigpin,LOW);
 pulsetime = pulseIn(echopin,HIGH);
 pulsetime = pulsetime/1000000;
 distance = speedofsound * pulsetime;
 distance = 100./2.*distance;
 Serial.print("Distance from the sensor is ");
 Serial.print(distance);Serial.println(" CentiMeters.");
    LCD.setCursor(0,1);
  LCD.print(distance);
  LCD.print(" Centimeters");
  delay(1000); 
  if (distance >= 20.00 ){
    digitalWrite(redled,LOW);
  digitalWrite(greenled,HIGH);
  delay(500);
  digitalWrite(greenlight,LOW);
  delay(1000);
  }    
 if (distance <= 20.00 && distance != 0.00){
  analogWrite(greenled,0);
  redlight =(230 + distance );
  analogWrite(redled,redlight);
  delay(1000);

}
  }
