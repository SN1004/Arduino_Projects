#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
void setup() {
LCD.begin(16,2);
LCD.clear();
LCD.setCursor(0,0);
LCD.print("HELLO ");
}

void loop() {


}
