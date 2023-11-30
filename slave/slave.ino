#include<Wire.h>
int x;

void setup() {
  Serial.begin(9600);
  digitalWrite(13,OUTPUT);
  digitalWrite(12,OUTPUT);
  digitalWrite(11,OUTPUT);
  Wire.begin(1);
  Wire.onReceive(rec);
  
}

void rec() {
  if (Wire.available()==1){
    x=Wire.read();
  }
}

void loop() {
  Serial.print(x);
  if (x==1){digitalWrite(13, HIGH); delay(2000);digitalWrite(13,LOW);}
  if (x==2){digitalWrite(12, HIGH); delay(2000);digitalWrite(12,LOW);}
  if (x==3){digitalWrite(11, HIGH); delay(2000);digitalWrite(11,LOW);}

}
