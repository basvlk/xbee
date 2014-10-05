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
}



