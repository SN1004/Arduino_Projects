int grd1 = 2 ;
int grd2 = 3 ;
int grd3 = 4 ;
int plr1 = 6 ; 
int plr2 = 7 ;
int plr3 = 8 ;
int plr4 = 9 ;
int plr5 = 10 ;
int plr6 = 11 ; 
int plr7 = 1 ;
int plr8 = 0 ;
int plr9 = 12 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(grd1,OUTPUT);pinMode(grd2,OUTPUT);
  pinMode(grd3,OUTPUT);pinMode(plr1,OUTPUT);
  pinMode(plr3,OUTPUT);pinMode(plr2,OUTPUT);
  pinMode(plr4,OUTPUT);pinMode(plr5,OUTPUT);
  pinMode(plr6,OUTPUT);pinMode(plr7,OUTPUT);
  pinMode(plr8,OUTPUT);pinMode(plr9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Writting HELLO
digitalWrite(grd2,HIGH);
digitalWrite(grd1,HIGH);digitalWrite(grd3,HIGH);
digitalWrite(plr7,HIGH);digitalWrite(plr9,HIGH);
delay(99);
digitalWrite(grd2,LOW);
digitalWrite(grd1,LOW);digitalWrite(grd3,LOW);
digitalWrite(plr7,LOW);digitalWrite(plr9,LOW);
delay(2);

}
