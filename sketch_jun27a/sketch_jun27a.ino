#include <Servo.h>
int pin9 = 11 ;
int pin10 = 10;
int pinA0 = A0;
float val;
float j;
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(pin9);
  pinMode(pin10,OUTPUT);
  pinMode(pinA0,INPUT);
}


void loop() {
  analogWrite(pin10,255);
  val = analogRead(pinA0);
  j = 5./1023.*val;
  delay(250);
  Serial.println(val);
  if(j<=2) {
    myservo.write(20);
    }
    
  if(j>=2 && j<=4){
    myservo.write(95);
    
    }

  if(j>=4){
    myservo.write(170);
    }  
}
