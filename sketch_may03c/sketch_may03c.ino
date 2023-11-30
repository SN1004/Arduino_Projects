int led3 = 3;
int led9 = 9;
int waitoff3=100;
int waiton3=200;
int waitoff9 =100;
int waiton9=200;
int led9blinks;
int led3blinks;
void setup() {
  Serial.begin(9600);
pinMode(led9,OUTPUT);
pinMode(led3,OUTPUT);
    Serial.println("How many times do you want led9 to blink ? ");
while(Serial.available()==0){}
led9blinks = Serial.parseInt();
Serial.println ("No. of times led9 will blink = " + String(led9blinks));

Serial.println(" ");
  Serial.println("How many times do you want led3 to blink ? ");
while(Serial.available()==0){}
led3blinks = Serial.parseInt();
Serial.println ("No. of times led3 will blink = " + String(led3blinks));
Serial.println(" ");
}

void loop(){

  Serial.println("  Your LED 9 is blinking. "); 
for (int j=1; j<=led9blinks; j=j+1){
  Serial.print("   Your LED has blinked upto : ");
  Serial.println(j);
digitalWrite(led9,HIGH);
delay(waiton9);
digitalWrite(led9,LOW);
delay(waitoff9);

}
Serial.println(" ");
  Serial.println(" Your LED 3 is blinking. ");
for (int j=1; j<=led3blinks; j=j+1){
Serial.print("    Your LED has blinked upto : ");
Serial.println(j);
digitalWrite(led3,HIGH);
delay(waiton3);
digitalWrite(led3,LOW);
delay(waitoff3);
}
Serial.println(" ");
}
