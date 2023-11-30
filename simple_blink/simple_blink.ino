
//simple LED glow
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);pinMode(9,OUTPUT);pinMode(6,OUTPUT);pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);digitalWrite(9,HIGH);digitalWrite(6,HIGH);digitalWrite(11,HIGH);
delay(250);
digitalWrite(3,LOW);digitalWrite(9,LOW);digitalWrite(6,LOW);digitalWrite(11,LOW);
delay(250);
}
