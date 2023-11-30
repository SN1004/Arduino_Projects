int voltage ;
float voltage1 ; 
void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(9,HIGH);
  voltage = analogRead(A0);
 voltage1 = (5./1023.*voltage);
 Serial.println(voltage1);
delay(250);
if (Serial.available() >0){  
digitalWrite(9,LOW);
}
}
