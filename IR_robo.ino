void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(6)==LOW){
  digitalWrite(10,1);
digitalWrite(9,0);
digitalWrite(8,1);
digitalWrite(7,0);
Serial.println("FORWARD");}


//  digitalWrite(10,0);
//digitalWrite(9,1);
//digitalWrite(8,0);
//digitalWrite(7,1);
//Serial.println("BACKWARD");
                                 

  else if(digitalRead(6)==HIGH){
  digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
Serial.println("STOP");}
  
  
  
}
