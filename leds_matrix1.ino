// C++ code

//Define ports
int leds = 7;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  //Turn on LEDs
  digitalWrite(leds, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  //Turn off LEDs
  digitalWrite(leds, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
}
