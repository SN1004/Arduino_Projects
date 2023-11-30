// 1,1 are the coordinates of the led (elevation ,no. of led )
int led 1 1 = 2; int led 1 2 = 3; int led 1 3 = 4; int led 1 4 = 5;
int led 2 1  = 6; int led 2 2 = 7; int led 2 3 = 8; int led 2 4 = 9;
int ledduration = 10;int ledduration1 = 250;
void setup() {
Serial.begin(9600);
pinMode(led 1 1 ,OUTPUT);pinMode(led 1 2 ,OUTPUT);pinMode(led 1 3,OUTPUT);pinMode(led 1 4 ,OUTPUT);
pinMode(led 2 1 ,OUTPUT);pinMode(led 2 2 ,OUTPUT);pinMode(led 2 3,OUTPUT);pinMode(led 2 4 ,OUTPUT);
}

void loop() {
  for(int f = 0 ; f <=10 ; f++){
 digitalWrite(led(1,1),HIGH);
 delay(ledduration);
 digitalWrite(led(2,1),HIGH);
 delay(ledduration);
 digitalWrite(led(1,3),HIGH);
 delay(ledduration);
 digitalWrite(led(2,3),HIGH);
 delay(ledduration);
  }
  for(int f = 10 ; f >=0 ; f--){
    digitalWrite(led(1,2),HIGH);
    delay(ledduration);
    digitalWrite(led(2,2),HIGH);
    delay(ledduration);
    digitalWrite(led(1,4),HIGH);
    delay(ledduration);
    digitalWrite(led(2,4),HIGH);
    delay(ledduration);
  }
    digitalWrite(led(1,1),HIGH);
    delay(ledduration1);
    digitalWrite(led(1,2),HIGH);
    delay(ledduration1);
    digitalWrite(led(1,3),HIGH);
    delay(ledduration1);
    digitalWrite(led(1,4),HIGH);
    delay(ledduration1);
    digitalWrite(led(2,1),HIGH);
    delay(ledduration1);
    digitalWrite(led(2,2),HIGH);
    delay(ledduration1);
    digitalWrite(led(2,3),HIGH);
    delay(ledduration1);
    digitalWrite(led(2,4),HIGH);
    delay(ledduration1);
    for(int j = 0; j<=10 ; j++){
      digitalWrite(led(1,1),HIGH);
      delay(ledduration);
      digitalWrite(led(2,3),HIGH);
      delay(ledduration);
    }
    for(int j = 10; j>=0 ; j--){
      digitalWrite(led(1,2),HIGH);
      delay(ledduration);
      digitalWrite(led(2,4),HIGH);
      delay(ledduration);
    }
    for(int i = 0; i<=10 ; i++){
      digitalWrite(led(1,3),HIGH);
      delay(ledduration);
      digitalWrite(led(2,1),HIGH);
      delay(ledduration);
    }
    for(int i = 10; i>=0 ; i--){
      digitalWrite(led(1,4),HIGH);
      delay(ledduration);
      digitalWrite(led(2,1),HIGH);
      delay(ledduration);
    }
    }
