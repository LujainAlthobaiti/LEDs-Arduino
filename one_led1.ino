// C++ code
//
int led1 = 7;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}