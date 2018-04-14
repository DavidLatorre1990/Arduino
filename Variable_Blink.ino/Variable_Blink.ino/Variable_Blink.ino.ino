int ledRojo = 3;
int potPin = A0;
int potValue = 0;

void setup() 
{

  pinMode(ledRojo, OUTPUT);
  Serial.begin(9600);

}

void loop() 
{

  potValue = analogRead(potPin);
  Serial.println(potValue);
  digitalWrite(ledRojo, HIGH);
  delay (potValue);
  digitalWrite(ledRojo, LOW);
  delay (potValue);
  
}
