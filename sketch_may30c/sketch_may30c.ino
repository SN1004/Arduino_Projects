void setup() {
  pinMode(11,OUTPUT);
  
}

void loop() {
  for(int j=0; j<=100; j=j+1){
  analogWrite(11,j);
  delay(50);
  
  }
}
