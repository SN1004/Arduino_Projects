int datain = 12 ;
int latch = 11 ;
int Clock = 10 ;
void setup() {
  pinMode(datain, OUTPUT);pinMode(latch, OUTPUT);
  pinMode(Clock, OUTPUT);
  digitalWrite(datain,HIGH);delay(1000);digitalWrite(Clock,HIGH);delay(1000);digitalWrite(latch,HIGH);delay(1000);
  digitalWrite(Clock,LOW);digitalWrite(datain,LOW);digitalWrite(latch,LOW);
}

void loop() {
}
