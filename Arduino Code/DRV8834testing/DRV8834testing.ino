const int stepPin = 11;
const int dirPin = 10;


const int ledPin = 13;

void setup(){
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  digitalWrite(stepPin, LOW);
  digitalWrite(dirPin, LOW); 
 
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, OUTPUT); 
}

short counter = 0;

void loop(){
  digitalWrite(ledPin, HIGH);
  
  for(int i = 0; i < 218; ++i){
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  
  ++counter;
  
  if (counter == 4) {
    Serial.println("# Changing Direction #");
    counter = 0;
    digitalWrite(dirPin, !digitalRead(dirPin));
  }
  
  digitalWrite(ledPin, LOW);
  
  delay(500);
}
