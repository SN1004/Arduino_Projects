int LEDPin3=3;
int LEDPin2=9;
int brightness = 5;
int fadeAmount = 4 ;
int wait3 = 60;
int wait2 = 50;
void setup() {
  pinMode(LEDPin3,OUTPUT); pinMode(LEDPin2,OUTPUT);

}

void loop() {
  analogWrite(LEDPin3, brightness);
  
brightness = brightness + fadeAmount;
if (brightness <=0 || brightness >=255) {
fadeAmount=-fadeAmount;
}
delay(wait3);

analogWrite(LEDPin2, brightness);

brightness = brightness + fadeAmount;
if (brightness <= 0 || brightness >= 255) {
fadeAmount = -fadeAmount;
}
delay(wait2);
}

