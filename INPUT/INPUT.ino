int il; 
int j;
void setup() {
 Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  il = analogRead(A0);
  j = (5./1023.*il);
  Serial.println(j);
delay(250);
}
