int LEDPin = 13;
int LEDPinon=100;
int LEDPinoff=100;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDPin,HIGH);
delay(LEDPinon);
digitalWrite(LEDPin,LOW);
delay(LEDPinoff);
}
