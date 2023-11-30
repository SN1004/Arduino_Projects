#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);//creating the liquidcrystal object named LCD
int mycounter = 1 ;
void setup() {
LCD.begin(16,2);// telling arduino our LCD has 16 columns and 2 rows   
// In LCD or Display the first row and columns are count as 0 .
LCD.setCursor(0,0);// Set LCD cursor to upper left corner or display 
LCD.print("My Timer:");//print the string in our first line 
}

void loop() {
  for (mycounter=1; mycounter<=10;mycounter=mycounter+1){
  LCD.setCursor(0,1);//telling where to start 
  LCD.print( mycounter);
  LCD.print(" Seconds");  
  LCD.print("        ");
  delay(1000); // delay for 1000 milliseconds ,which is one seconds 
  }
for (mycounter=10; mycounter>=0;mycounter=mycounter-1){
  LCD.setCursor(0,1);//telling where to start 
  LCD.print( mycounter);
  LCD.print(" Seconds");
  LCD.print("        ");  
  delay(1000); // delay for 1000 milliseconds ,which is one seconds 
  }
}
