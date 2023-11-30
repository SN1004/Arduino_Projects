int j;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT); 
  pinMode(11,OUTPUT);
}

void loop() {
 delay(500);
 j = analogRead(A0);
 while(j<=500){
 digitalWrite(13,HIGH);
 delay(250);
 digitalWrite(13,LOW);
 delay(250);
 j = analogRead(A0);
 }
 while(j>500){
 for(int i=0; i<=100; i=i+5 ) {
  analogWrite(11,i);
  delay(50);
  }
  digitalWrite(11,LOW);
   j = analogRead(A0);
  
  }
 
}
