int moro;
void setup() {

Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT); 
}

void loop() {
Serial.println("HOW MANY TIMES YOU WANT TO BLINK LED1");
while(Serial.available()==0) {}
moro = Serial.parseInt();
for(int j=1; j<=moro; j=j+1){
  Serial.print("blink no = ");
  Serial.println(j);
  analogWrite(12,255);
  delay(250);
  digitalWrite(12,LOW);
  delay(250);
  
  }
}

