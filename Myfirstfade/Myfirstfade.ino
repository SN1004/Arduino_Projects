int led9 = 9;
int led3 = 3; 
int fadeAmount = 5 ;
int led9times ;
int led3times ;
int leddelay2 = 500;
float leddelay = 53.55;
int leddelay1 = 100;
void setup() {
pinMode(led9,OUTPUT);pinMode(led3,OUTPUT);
Serial.begin(9600);
Serial.println("Hello guys!!!!!!");Serial.println (" ");
delay(40);
Serial.println("This is my first fading program made by me.");Serial.println(" ");
}

void loop() {
  for (int j=1;j<=10;j=j+2){
    Serial.println(j);
  analogWrite(led9,0);delay(leddelay);
    analogWrite(led9,51);delay(leddelay);analogWrite(led9,102);delay(leddelay);
    analogWrite(led9,153);delay(leddelay);analogWrite(led9,204);delay(leddelay);
    analogWrite(led9,255);delay(leddelay);analogWrite(led9,204);delay(leddelay);
    analogWrite(led9,153);delay(leddelay);analogWrite(led9,102);delay(leddelay);
    analogWrite(led9,51);delay(leddelay);analogWrite(led9,40);delay(leddelay);analogWrite(led9,20);delay(leddelay);analogWrite(led9,10);delay(leddelay);analogWrite(led9,0);

 delay(leddelay1);
 analogWrite(led3,0);delay(leddelay);
     analogWrite(led3,51);delay(leddelay);analogWrite(led3,102);delay(leddelay);
    analogWrite(led3,153);delay(leddelay);analogWrite(led3,204);delay(leddelay);
    analogWrite(led3,255);delay(leddelay);analogWrite(led3,204);delay(leddelay);
    analogWrite(led3,153);delay(leddelay);analogWrite(led3,102);delay(leddelay);
    analogWrite(led3,51);delay(leddelay);analogWrite(led3,40);delay(leddelay);analogWrite(led3,20);delay(leddelay);analogWrite(led3,10);delay(leddelay);analogWrite(led3,0);
    
 delay(leddelay1);
  }
  analogWrite(led9,255);delay(leddelay2);analogWrite(led3,255);delay(leddelay2);
  analogWrite(led9,0);analogWrite(led3,0);delay(leddelay2);
}

