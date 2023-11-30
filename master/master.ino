#include<Wire.h>
int x=1;


void setup() {
  Wire.begin();
 
}

void loop() {
  Wire.beginTransmission(1);
  Wire.write(x);
  Wire.endTransmission();
  x++; 
  if(x>3)x=1;
  delay(2000);
}
