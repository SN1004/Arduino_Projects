String myname ;
int age ;
float height ;
void setup() {
  Serial.begin(9600);

}

void loop() {
Serial.println("Please enter your name.");
while(Serial.available() == 0 ){
}
myname = Serial.readString();
Serial.println(myname);
Serial.println("");

Serial.println("Please enter your age.");
while(Serial.available() == 0 ){
}
age = Serial.parseInt();
Serial.println(age);
Serial.println("");


Serial.println("Please enter your height.");
while(Serial.available() == 0 ){
}
height = Serial.parseFloat();
Serial.println(height);
Serial.println("");

Serial.println("Hello "+ myname +",you are "+ age +" years old ," );
Serial.print("and you are ");Serial.print(height);Serial.println(" feet tall." ); 
Serial.println("");
}
