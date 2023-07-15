// C++ code

//row1
int led1 = 7;
int led2 = 6;
int led3 = 5;
int led4 = 4;

//row2
int led5 = 3;
int led6 = 8;
int led7 = 9;
int led8 = 10;

//row3
int led9 = 2;
int led10 = A0;
int led11 = A1;
int led12 = A2;

//row4
int led13 = 1;
int led14 = 11;
int led15 = 12;
int led16 = 13;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(2, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  pinMode(1, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led13, HIGH);
  digitalWrite(led14, HIGH);
  digitalWrite(led15, HIGH);
  digitalWrite(led16, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led13, LOW);
  digitalWrite(led14, LOW);
  digitalWrite(led15, LOW);
  digitalWrite(led16, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
}