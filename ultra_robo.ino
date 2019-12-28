const int trigPin = 5;
const int echoPin = 4;
// defines variables
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(13,OUTPUT);
Serial.begin(9600);  

}

void loop() {
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
if(distance<=9)
{
  digitalWrite(10,0);
  digitalWrite(9,1);
  digitalWrite(8,0);
  digitalWrite(7,1);
  delay(500);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,1);
  delay(500);
  
  
  }
else
{
  digitalWrite(10,1);
digitalWrite(9,0);
digitalWrite(8,1);
digitalWrite(7,0);
}
  

}
