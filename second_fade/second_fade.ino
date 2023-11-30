int led9 = 9;
int led3 = 3;
int led6 = 6;
int led10 = 11;
float leddelay9 = 65.99;
float leddelay6 = 65.99;
float leddelay3 = 65.99;
float leddelay10 = 65.99;
int leddelay = 250;
void setup() {
 pinMode(led9,OUTPUT);pinMode(led3,OUTPUT);pinMode(led10,OUTPUT);pinMode(led6,OUTPUT);
 Serial.begin(9600);

}

void loop() {

  analogWrite(led9,0);delay(leddelay9);analogWrite(led9,51);delay(leddelay9);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led9,153);delay(leddelay9);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led9,255);delay(leddelay9);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led9,153);delay(leddelay9);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led9,51);delay(leddelay9);
  analogWrite(led9,0);delay(leddelay9);
  delay(leddelay);
  
  analogWrite(led3,0);delay(leddelay3);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led3,255);delay(leddelay3);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led3,0);delay(leddelay3);
  delay(leddelay);
 
  analogWrite(led6,0);delay(leddelay6);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led6,255);delay(leddelay6);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led6,0);delay(leddelay6);
  delay(leddelay);
 
  analogWrite(led10,0);delay(leddelay10);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led10,102);delay(leddelay10);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led10,204);delay(leddelay10);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led10,204);delay(leddelay10);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led10,102);delay(leddelay10);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);

  analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,255);delay(leddelay9);analogWrite(led3,255);delay(leddelay3);analogWrite(led6,255);delay(leddelay6);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);

  analogWrite(led9,0);delay(leddelay9);analogWrite(led9,51);delay(leddelay9);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led9,153);delay(leddelay9);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led9,255);delay(leddelay9);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led9,153);delay(leddelay9);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led9,51);delay(leddelay9);
  analogWrite(led9,0);delay(leddelay9);
  delay(leddelay);

    analogWrite(led10,0);delay(leddelay10);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led10,102);delay(leddelay10);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led10,204);delay(leddelay10);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led10,204);delay(leddelay10);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led10,102);delay(leddelay10);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);

    analogWrite(led3,0);delay(leddelay3);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led3,255);delay(leddelay3);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led3,0);delay(leddelay3);
  delay(leddelay);

    analogWrite(led6,0);delay(leddelay6);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led6,255);delay(leddelay6);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led6,0);delay(leddelay6);
  delay(leddelay);

    analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,255);delay(leddelay9);analogWrite(led3,255);delay(leddelay3);analogWrite(led6,255);delay(leddelay6);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);
  
   analogWrite(led9,0);delay(leddelay9); analogWrite(led3,0);delay(leddelay3);analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led9,255);delay(leddelay9);analogWrite(led3,255);delay(leddelay3);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);
  analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);
  delay(leddelay);

   analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);analogWrite(led6,255);delay(leddelay6);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);

      analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led3,255);delay(leddelay3);analogWrite(led6,255);delay(leddelay6);
  analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);
  analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);
  analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);
  delay(leddelay);

   analogWrite(led9,0);delay(leddelay9);analogWrite(led10,0);delay(leddelay10);analogWrite(led9,51);delay(leddelay9);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led10,102);delay(leddelay10);analogWrite(led9,153);delay(leddelay9);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led10,204);delay(leddelay10);analogWrite(led9,255);delay(leddelay9);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led10,204);delay(leddelay10);analogWrite(led9,153);delay(leddelay9);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led10,102);delay(leddelay10);analogWrite(led9,51);delay(leddelay9);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,0);delay(leddelay9);analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);
  
    analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,255);delay(leddelay9);analogWrite(led3,255);delay(leddelay3);analogWrite(led6,255);delay(leddelay6);analogWrite(led10,255);delay(leddelay10);
  analogWrite(led9,204);delay(leddelay9);analogWrite(led3,204);delay(leddelay3);analogWrite(led6,204);delay(leddelay6);analogWrite(led10,204);delay(leddelay10);
  analogWrite(led9,153);delay(leddelay9);analogWrite(led3,153);delay(leddelay3);analogWrite(led6,153);delay(leddelay6);analogWrite(led10,153);delay(leddelay10);
  analogWrite(led9,102);delay(leddelay9);analogWrite(led3,102);delay(leddelay3);analogWrite(led6,102);delay(leddelay6);analogWrite(led10,102);delay(leddelay10);
  analogWrite(led9,51);delay(leddelay9);analogWrite(led3,51);delay(leddelay3);analogWrite(led6,51);delay(leddelay6);analogWrite(led10,51);delay(leddelay10);
  analogWrite(led9,0);delay(leddelay9);analogWrite(led3,0);delay(leddelay3);analogWrite(led6,0);delay(leddelay6);analogWrite(led10,0);delay(leddelay10);
  delay(leddelay);
}
