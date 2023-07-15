// C++ code

//Define port
int led1 = 7;

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  //Turn on LED
  digitalWrite(led1, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)

  //Turn off LEDs
  digitalWrite(led1, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
}
