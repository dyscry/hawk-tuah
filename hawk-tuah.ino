#include <Wire.h>
#include "Adafruit_VL6180X.h"
 
Adafruit_VL6180X vl = Adafruit_VL6180X();
 
const int enA = 5; //right motor
const int in1 = 6;
const int in2 = 7;
const int in3 = 8; //left motor
const int in4 = 9;
const int enB = 10;
 
const int frontIR = A0;
 
void pushing_p();
void smooth_operator();
void retreat();
void rotato_potato();
 
void setup() {
  Serial.begin(115200);
  
  Serial.println("HAWK TUAH!");
  if (! vl.begin()) {
    Serial.println("uh oh wers da sensor");
    while (1);
  }
  Serial.println("Sensorized!");
 
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(frontIR, INPUT);
 
  delay(3000);
}
 
void loop() {
  int floorSensorFront = analogRead(frontIR); // Read Front IR
  uint8_t range = vl.readRange(); // TOF
  
  if(range < 190) {
    if (range < 50){
      pushing_p();
      return;
    }
    if (floorSensorFront > 900){
      retreat();
      return;
    }
    // If opps is detected, brah beep baap baa
    smooth_operator();
  }
  else if (floorSensorFront > 900){
    retreat();
  }
  else{
    rotato_potato();
  }
}
 
// Attack function at full speed
void pushing_p() {
  Serial.println("pushing p!");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 250);
  analogWrite(enB, 250);
 
// Attack function at cautious speed
void smooth_operator() {
  Serial.println("smooth operator");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 220);
  analogWrite(enB, 220);
}
 
// Function to move the bot backward
void retreat() {
  Serial.println("FRONT POOP");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  delay(500);
}
 
// Function to move the bot in a specific pattern for searching
void rotato_potato() {
  Serial.println("ROTATO POTATO");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 220);
  analogWrite(enB, 220);
}