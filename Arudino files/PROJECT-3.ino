void setup() {
  Serial.begin(9600); 
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
 
void loop() {
  char data;
  data=Serial.read();
    if(data=='1'){
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,0);
      digitalWrite(9,LOW); 
    }
    else if(data=='2'){
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,0);
      digitalWrite(9,LOW); 
    }
    else if(data=='3'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(6,0);
      digitalWrite(7,LOW); 
    }
    else if(data=='4'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(6,0);
      digitalWrite(7,LOW); 
    }
  }
