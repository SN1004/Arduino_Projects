int led6 = 6 ;
int led9 = 9 ; 
int brightness = 5; 
int brightness1 = 0;
int fadeAmount = 50; 
int wait9 = 150;
int led3 = 3 ;
int wait3 = 150;
void setup() {
  pinMode(led9,OUTPUT);pinMode(led3,OUTPUT);pinMode(led6,OUTPUT);
}

void loop() {
analogWrite(led9, brightness); delay(wait9);
 analogWrite(led9,brightness1);
  brightness = brightness + fadeAmount; 
  if (brightness <=0 || brightness >= 255){
  fadeAmount = -fadeAmount ;
  }
 analogWrite(led3 , brightness);delay(wait3);
 analogWrite(led3,brightness1);
brightness = brightness + fadeAmount; 
if (brightness <=0 || brightness >= 255){
fadeAmount = -fadeAmount;
}
analogWrite(led6, brightness); delay(wait9);
 analogWrite(led6,brightness1);
  brightness = brightness + fadeAmount; 
  if (brightness <=0 || brightness >= 255){
  fadeAmount = -fadeAmount ;
  }
}
