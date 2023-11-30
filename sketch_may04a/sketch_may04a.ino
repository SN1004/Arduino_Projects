int LDR = 0;
int LDRValue = 0;
int Light_senstivity = 500;

void setup (){
  
  Serial.begin(9600);
 
  }

  void loop (){ 
    
    LDRValue = analogRead(LDR); 
    Serial.println(LDRValue);
    delay(2);
    
    }
