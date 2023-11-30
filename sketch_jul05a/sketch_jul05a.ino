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
   ir = analogRead(A0);
   Serial.println(ir);
   delay(250);
}
