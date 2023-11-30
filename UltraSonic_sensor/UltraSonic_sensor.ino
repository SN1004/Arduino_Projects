int trigpin = 13;
int echopin = 11; 
float pingtime ; 
float speedofsound ; 
float distance = 6 ; 

void setup() {
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2000);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(2000);
 digitalWrite(trigpin,LOW);

 pingtime = pulseIn(echopin,HIGH);

 speedofsound =( ((2*distance/pingtime)/63360*1000000*3600)*0.447 );
 Serial.print("The speed of sound is ");Serial.print( speedofsound );
 Serial.println(" meters per second");
 delay(500);
}
