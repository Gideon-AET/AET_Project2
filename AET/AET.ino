/*
AET Shrek Enclsoure
Team Name: Plantasia
Team Members: Jessie and Taylor
Description: button and servo program
*/

//Servo code library
#include<Servo.h>;

//VARIABLES
Servo myServo;
const int buttonPin =7;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
