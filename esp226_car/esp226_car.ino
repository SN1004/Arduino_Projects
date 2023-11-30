
#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer server;

char* ssid = "Redmi";              //enter the wifi network id
char* password = "vedant00";          // enter the wifi network password

//motor1 
#define RIGHTPWM D6
#define RIGHTDIR1 D4
#define RIGHTDIR2 D5

//motor2
#define LEFTPWM D7
#define LEFTDIR1 D1
#define LEFTDIR2 D3

int dcmsp = 500 ; 

void setup() {

  pinMode(RIGHTPWM, OUTPUT);
  pinMode( RIGHTDIR1, OUTPUT);
  pinMode(RIGHTDIR2, OUTPUT);
  pinMode(LEFTPWM, OUTPUT);
  pinMode(LEFTDIR1, OUTPUT);
  pinMode(LEFTDIR2, OUTPUT);
  WiFi.begin(ssid, password);
  Serial.begin(9600);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
  }
  
  server.on("/forward", run_forward);
  server.on("/left", rotate_anticlockwise);
  server.on("/right", rotate_clockwise);
  server.on("/backward", run_Backward);
  server.begin();

  
}

void loop() {
  server.handleClient();
}

void run_forward() {
  digitalWrite(RIGHTDIR1, HIGH);
  digitalWrite(RIGHTDIR2, LOW);
  digitalWrite(LEFTDIR1, HIGH);
  digitalWrite(LEFTDIR2, LOW);

  analogWrite(RIGHTPWM, dcmsp );
  analogWrite(LEFTPWM, dcmsp );
  server.send(200, "text/plain", "forward");
  delay(2000);
  STOP(); 
}

void rotate_anticlockwise() {
  digitalWrite(RIGHTDIR1, HIGH);
  digitalWrite(RIGHTDIR2, LOW);
  digitalWrite(LEFTDIR1, LOW);
  digitalWrite(LEFTDIR2, HIGH);

  analogWrite(RIGHTPWM, dcmsp );
  analogWrite(LEFTPWM,  dcmsp  );
  server.send(200, "text/plain", "anti-clw");
  delay(166);
  STOP();
}


void rotate_clockwise() {
  digitalWrite(RIGHTDIR1, LOW);
  digitalWrite(RIGHTDIR2, HIGH);
  digitalWrite(LEFTDIR1, HIGH);
  digitalWrite(LEFTDIR2, LOW);

  analogWrite(RIGHTPWM, dcmsp  );
  analogWrite(LEFTPWM, dcmsp );
  server.send(200, "text/plain", "clw");
  delay(166);
  STOP();  
}

void run_Backward() {
  digitalWrite(RIGHTDIR1, LOW);
  digitalWrite(RIGHTDIR2, HIGH);
  digitalWrite(LEFTDIR1, LOW);
  digitalWrite(LEFTDIR2, HIGH);

  analogWrite(RIGHTPWM, dcmsp  );
  analogWrite(LEFTPWM, dcmsp );
  server.send(200, "text/plain", "back");
  delay(2000);
  STOP(); 
}

void STOP(){
  digitalWrite(RIGHTDIR1, LOW);
  digitalWrite(RIGHTDIR2, HIGH);
  digitalWrite(LEFTDIR1, LOW);
  digitalWrite(LEFTDIR2, HIGH);

  analogWrite(RIGHTPWM, 0  );
  analogWrite(LEFTPWM, 0 );
  //server.send(200, "text/plain", "stop");
}
  


