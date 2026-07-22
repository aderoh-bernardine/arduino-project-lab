// C++ code
//dimmable LED 
int readPin = A3;
int analogPin = 3;
int delayTime = 500;
float readVal;
float calcVal;
void setup()
{
  pinMode(readPin, INPUT);
  pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  readVal = analogRead(readPin) / 4;
  analogWrite(analogPin, readVal);
  calcVal = (5./255.)* readVal;
  Serial.println(calcVal);
  
  delay(delayTime);
}
