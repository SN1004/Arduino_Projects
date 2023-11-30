int led9 = 9;
int led3 = 3;
int led6 = 6;
int led10 = 11;
void setup() {
 pinMode(led9,OUTPUT);pinMode(led3,OUTPUT);pinMode(led6,OUTPUT);

}

void loop() {
for (int j9 = 0 ; j9<=255 ; j9++){
  analogWrite(led9,j9);
  delay(5);
}
for (int f9 = 255 ; f9>=0 ; f9--){
  analogWrite(led9,f9);
  delay(5);
}
for (int a3 = 0 ; a3<=255 ; a3++){
  analogWrite(led3,a3);
  delay(5);
  }
for (int b3 = 255 ; b3>=0 ; b3--){
  analogWrite(led3,b3);
  delay(5);
}
for (int c6 = 0; c6<=255; c6++){
  analogWrite(led6,c6);
  delay(5);
}
for (int d6 =255; d6>=0; d6--){
  analogWrite(led6,d6);
  delay(5);
}
for (int x10 = 0; x10<=255; x10++){
  analogWrite(led10,x10);
  delay(5);
}
for (int y10 = 255; y10>=0; y10--){
  analogWrite(led10,y10);
  delay(5);
}

} 
