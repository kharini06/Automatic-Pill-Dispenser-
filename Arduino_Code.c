#include <Servo.h> 
Servo servo; 
int pos; 
int Signal = 18; 
int servopin = 19;

void setup() { 
    pinMode(Signal, INPUT); 
    servo.attach(servopin);
    servo.write(0);         //close cap on power on
    delay(1000);
    servo.detach();
     } 
void loop() { 
    int buttonState = digitalRead(Signal);
     delay(1); 
    if (buttonState == 0) 
    { 
  servo.attach(servopin);
  delay(1);
  servo.write(180);  
  delay(3000);       //wait 3 seconds
  servo.write(0);    
  delay(1000);
  servo.detach();
    }
