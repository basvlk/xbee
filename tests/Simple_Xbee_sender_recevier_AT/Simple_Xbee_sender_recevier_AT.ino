int incomingByte = 0;

void setup () 
{
  Serial.begin(9600);
}

void loop () 
{
  Serial.println("Hello World");
  digitalWrite(13, HIGH);
  delay(5000);
  Serial.println("Umm .. pause");
  digitalWrite(13, LOW);
  delay(5000);
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    } 
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
}



