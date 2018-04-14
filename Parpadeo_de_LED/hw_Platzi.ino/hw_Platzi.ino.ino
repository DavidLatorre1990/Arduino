//global var declaration

int ledRojo1 = 3;

void setup() 
{
  pinMode (ledRojo1, OUTPUT);

}

void loop() 
{
  digitalWrite(ledRojo1, HIGH);
  delay(50);
  digitalWrite(ledRojo1,LOW);
  delay(50);
}
