const int stepPin = 11;
const int dirPin = 10;


const int ledPin = 13;

void setup(){
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT):
  digitalWrite(stepPin, LOW);
  digitalWrite(dirPin, LOW); 
 
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, OUTPUT); 
}


void loop(){
  digitalWrite(ledPin, HIGH);
  
  for(int i = 0; i < 200){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(100);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(100);
  }
  
  digitalWrite(ledPin, LOW);
  
  delay(1000);
}
