//a 4-bit digital counter from 0-15
int ledPin1 =7;
int ledPin2 =9;
int ledPin3 =11;
int ledPin4 =13;
int timeDelay = 500;
int delayTime = 1000;
void setup(){
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
 }
void loop(){
 //counter 0
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 1
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 2
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 3
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 4
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 5
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 6
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 7
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 8
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 9
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 10
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 11
   digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay); 
//counter 12
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 13
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(timeDelay);
//counter 14
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    delay(timeDelay);
//counter 15
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    delay(delayTime);
    
}
