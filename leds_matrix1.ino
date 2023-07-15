// C++ code
//
int leds = 7;
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(leds, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(leds, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}