#include <Servo.h>

Servo servo;
void setup() {
  servo.attach(5);
}

void loop() {
  servo.write(95);

}
