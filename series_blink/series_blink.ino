int led6 = 6 ;
int led9 = 9 ;  
int wait9 = 150;
int led3 = 3 ;
int wait3 = 150;
int wait6 = 150;
void setup() {
pinMode(led9,OUTPUT);pinMode(led3,OUTPUT);pinMode(led6,OUTPUT);
}

void loop() {
digitalWrite(led9,HIGH);delay(wait9);
digitalWrite(led9,LOW);delay(wait9);
digitalWrite(led3,HIGH);delay(wait3);
digitalWrite(led3,LOW);delay(wait3);
digitalWrite(led6,HIGH);delay(wait6);
digitalWrite(led6,LOW);delay(wait6);
}
