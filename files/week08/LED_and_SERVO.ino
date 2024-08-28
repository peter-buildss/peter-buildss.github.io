#include <Servo.h>
// Define pin connections
const int ServoPin = 3; // Pin connected to the output of the Hall sensor
const int ledPin = 26;        // Pin connected to the LED

Servo myServo;

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  myServo.attach(ServoPin);
  
  // Set up the Hall sensor pin as input
  //pinMode(hallSensorPin, INPUT);
  
  // Set up the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the Hall sensor
  //int sensorValue = digitalRead(hallSensorPin);
  
  // Print the sensor value to the Serial Monitor
  //Serial.println(sensorValue);

  
  // If the Hall sensor detects a magnetic field
  myServo.write(179);
  digitalWrite(ledPin,HIGH);
  delay(2000);
  myServo.write(90);
  digitalWrite(ledPin,LOW);
  delay(2000);
  myServo.write(1);
  delay(2000);
}

