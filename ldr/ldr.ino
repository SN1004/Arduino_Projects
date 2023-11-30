int ldrvalue ; 
int ldrvalue1 ;
void setup() {
pinMode(A0,INPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(9,HIGH);
 ldrvalue = analogRead(A0);
 Serial.println(ldrvalue);
 delay(250);
}

