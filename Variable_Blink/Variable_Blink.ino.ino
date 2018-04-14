int ledRojo = 3;
int potPin = A0;
int potValue = 0;

void setup() 
{

  pinMode(ledRojo1, OUTPUT);

}

void loop() 
{

  potValue = analogRead(potPin);
  digitalWrite(ledRojo, HIGH);
  delay (potValue);
  digitalWrite(ledRojo, LOW);
  delay (potValue);
  
}
