int motorpin1 = 9;
int motorpin2 = 10;
int trigpin = 13 ; 
int echopin = 11 ;
int vccpin = 1; 
float distance ;
float speedofsound = 320.50 ;
float pulsetime;

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(vccpin,OUTPUT);
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin,LOW);
 delay(9);
 digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 digitalWrite(vccpin,HIGH);
 pulsetime = pulseIn(echopin,HIGH);
 pulsetime = pulsetime/1000000;
 distance = speedofsound * pulsetime;
 distance = 100./2.*distance;
 Serial.print("Distance from the sensor is ");
 Serial.print(distance);Serial.println(" CentiMeters.");
 
 digitalWrite(motorpin1,HIGH);
 digitalWrite(motorpin2,HIGH);
if (distance <=15.00 ){
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
}
}
