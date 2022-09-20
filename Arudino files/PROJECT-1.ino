void setup() {
  
  Serial3.begin(9600); 
  
  //pins for ROTATE 
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  //pins for WHEELS
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}
 
void loop() {
  char data;
  data=Serial.read();
    if(data=='F'){
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
 
    }
    else if(data=='B'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
    }
    else if(data=='L'){
      digitalWrite(8,0);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    } 
    else if(data=='R'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,0);
      digitalWrite(11,LOW); 
    }
    else if(data=='S'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW); 
    }
    else if(data=='C'){
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
    }
    else if(data=='A'){
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
    }
    else if(data=='X'){
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
    }
  }
