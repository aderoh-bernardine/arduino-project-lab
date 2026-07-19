// C++ code
//dimmable LED 
int readPin = A3;
int analogPin = 3;
int delayTime = 500;
float calcVal;
void setup()
{
  pinMode(readPin, INPUT);
  pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  calcVal =(5./1023.)*analogRead(readPin);
  analogWrite(analogPin, calcVal);
  Serial.println(calcVal);
  delay(delayTime);
}
