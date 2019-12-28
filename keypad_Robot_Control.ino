/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#include <Keypad.h>

const int trigPin = 5;
const int echoPin = 4;
// defines variables
long duration;
int distance;

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(13,OUTPUT);
  Serial.begin(9600);
}
  
void loop(){

   // put your main code here, to run repeatedly:
  // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(100);




  
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }

  switch(key) {
  
  case 1:Serial.println("Forward");
        digitalWrite(10,1);
        digitalWrite(9,0);
        digitalWrite(8,1);
        digitalWrite(7,0);

  case 2:
  Serial.println("Backward");
  digitalWrite(10,0);
  digitalWrite(9,1);
  digitalWrite(8,0);
  digitalWrite(7,1);  

  case 3:
  Serial.println("Right");
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,1); 

  case 4:
  Serial.println("Left");
  digitalWrite(10,0);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,0); 

  

  

  

  
}
