int led1 = 12;
int led2 = 10;
int led3 = 8;
int led4 = 6;
int led5 = 4;
int ir;

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(A0, INPUT);

}

void loop() {
  int j = 1 ;

  for ( j <= 100; ) {
    ir = analogRead(A0);
    if (ir <= 600) {
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1); //H
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);  // GIVING SMALL SPACE
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1); //E
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);   //L
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);    //L
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);    //O
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(4);   // GIVING LARGE SPACE
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//S
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);//I
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//R
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(10);
      j++;
    }
    else {}
  }
  int i = 1 ;
  for ( i <= 500; ) {
    ir = analogRead(A0);
    if (ir <= 600) {
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , LOW);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//T
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , LOW); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1); //H
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, HIGH);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);//A
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1, HIGH);  digitalWrite(led2, HIGH);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, HIGH);
      delay(1);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, HIGH);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, HIGH);  digitalWrite(led2, HIGH);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, HIGH);
      delay(1);//N
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1, HIGH);  digitalWrite(led2, HIGH);  digitalWrite(led3, HIGH);  digitalWrite(led4, HIGH);  digitalWrite(led5, HIGH);
      delay(1);
      digitalWrite(led1, LOW);  digitalWrite(led2, HIGH);  digitalWrite(led3, LOW);  digitalWrite(led4, HIGH);  digitalWrite(led5, LOW);
      delayMicroseconds(500);
      digitalWrite(led1, HIGH);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, HIGH);
      delayMicroseconds(500);//K
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//S
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(4);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//S
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);//I
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , HIGH);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , LOW);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , HIGH);  digitalWrite(led5 , LOW);
      delay(1);
      digitalWrite(led1 , HIGH); digitalWrite(led2 , HIGH);  digitalWrite(led3 , HIGH);  digitalWrite(led4 , LOW);  digitalWrite(led5 , HIGH);
      delay(1);//R
      digitalWrite(led1, LOW);  digitalWrite(led2, LOW);  digitalWrite(led3, LOW);  digitalWrite(led4, LOW);  digitalWrite(led5, LOW);
      delay(4);
      i++;
    }
    else {}
  }
}
