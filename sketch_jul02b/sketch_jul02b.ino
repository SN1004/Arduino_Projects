#include <Servo.h>

int trigpin = 7;
int echopin = 6;
int pin5 = 5;
int omot1 = 10;
int omot2 = 11;
int cmot11 = 8;
int cmot12 = 9;
int cmot21 = 12;
int cmot22 = 13;
int distmove = 20;
float pulsetime;
float pulsetime1;
float pulsetime2;
float dist;
float dist1;
float dist2;

Servo myservo;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(omot1, OUTPUT);
  pinMode(omot2, OUTPUT);
  pinMode(cmot11, OUTPUT);
  pinMode(cmot12, OUTPUT);
  pinMode(cmot21, OUTPUT);
  pinMode(cmot22, OUTPUT);
  myservo.attach(pin5);

  
    analogWrite(omot1, 255);
    analogWrite(omot2, 255);

    digitalWrite(cmot11, HIGH);
    digitalWrite(cmot12, LOW);
    digitalWrite(cmot21, LOW);
    digitalWrite(cmot22, HIGH);

    delay(500);
  
  }
  void loop (){}
