int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
int off = LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT); pinMode(led2, OUTPUT); pinMode(led3, OUTPUT); pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT); pinMode(led6, OUTPUT); pinMode(led7, OUTPUT); pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT); pinMode(led10, OUTPUT); pinMode(led11, OUTPUT); pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, off); digitalWrite(led2, off); digitalWrite(led3, off); digitalWrite(led4, off);
  digitalWrite(led5, off); digitalWrite(led6, off); digitalWrite(led7, off); digitalWrite(led8, off);
  digitalWrite(led9, off); digitalWrite(led10, off); digitalWrite(led11, off); digitalWrite(led11, off);
  digitalWrite(led10, off); digitalWrite(led12, off); digitalWrite(led13, off);
}
