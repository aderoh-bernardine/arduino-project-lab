// C++ code
int redPin = 3;
int yellowPin = 7;
int greenPin = 10;
int delayTime = 3000;
int timeDelay = 2000;
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop()
{
  digitalWrite(greenPin, HIGH);
  delay(delayTime); // Wait for 1000 millisecond(s)
  digitalWrite(greenPin,LOW);
  
  digitalWrite(yellowPin,HIGH);
  delay(timeDelay);
  digitalWrite(yellowPin,LOW);
  
  digitalWrite(redPin,HIGH);
  delay(delayTime);
  digitalWrite(redPin,LOW);
}









