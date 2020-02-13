#include "Arduino.h"
#include "flamme.h"

int digitalPin =  ;
int digitalVal;
int analogVal; 

void flamme_init(void){
  Serial.println("init flamme");

  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
  
}

void loop() {

   digitalVal = digitalRead(digitalPin);

        if(digitalVal == HIGH)   //si la flamme est détecté

        { 
          Serial.println("Flamme détecté"); 
        }

        else 
        {
          Serial.println("Flamme non détecté");
        }

analogVal = analogRead(analogPin); 
Serial.println(analogVal);

}
