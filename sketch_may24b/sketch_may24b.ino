int li=11;

void setup() {
 pinMode(li,INPUT);
 Serial.begin(9600);

}

void loop() {
  Serial.println(li,INPUT);// put your main code here, to run repeatedly:
}
