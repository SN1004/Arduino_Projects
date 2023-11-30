int led1 = 12;
int led2 = 10;
int led3 = 8;
int led4 = 6;
int led5 = 4;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

}

void loop() {
  
  digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, HIGH);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);//A
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
  delay(3);
  digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
  delay(3);//S
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
  delay(3);
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
  delay(3);//T
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
  delay(3);
  digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
  delay(3); //H
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
  delay(3);
  digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, HIGH);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);
  digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
  delay(1);//A
  digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
  delay(44);
}
