int incomingByte = 0;
const int ledPin = 13; // the pin that the LED is attached to
unsigned long previousMillis = 0;   // to keep track of time
const long interval = 1000; // time between alternating messages

void setup () 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop () 
{
  unsigned long currentMillis = millis();
  
  
  if(currentMillis - previousMillis >= interval ) 
  {
    // save the last time you blinked the LED 
  previousMillis = currentMillis;   
  Serial.println("Hello World");
  delay(1000);
  Serial.println("Umm .. pause");
  }
 
  
  if (Serial.available() > 0) 
  {
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    } 
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') 
    {
      digitalWrite(ledPin, LOW);
    }  
  }

}


