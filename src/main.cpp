#include <Arduino.h>


#define Relay_Pin 2
void setup() {

  // put your setup code here, to run   once:
  
  pinMode(Relay_Pin, OUTPUT); 
  Serial.begin(9600);
  
  }
  
  void loop() {
   // put your main code here, to run repeatedly: 
  digitalWrite(Relay_Pin, HIGH);
  Serial.println("Relay ON"); 
  delay(2000); 
  digitalWrite(Relay_Pin, LOW); 
  Serial.println("Relay OFF");
  delay(2000);
  
  }