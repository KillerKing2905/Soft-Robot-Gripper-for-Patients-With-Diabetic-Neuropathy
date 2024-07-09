#include <ESP32Servo.h>

Servo myservo;  // create a servo object

int servoPin = 18; // replace with your chosen PWM pin

void setup() {
  // start serial communication
  myservo.attach(servoPin); // attach the servo to the pin
Serial.begin(115200) ; 

}

void loop() {
if(Serial.available()){
  
  int angle = Serial.parseInt() ;
  myservo.write(angle) ;
}
delay(25) ;

}
