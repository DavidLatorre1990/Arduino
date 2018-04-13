int azul = 13;
int rojo = 7;
int milisegundos = 300;

void setup()
{
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  digitalWrite(azul, HIGH);
  digitalWrite(rojo, LOW);
  delay(milisegundos);
  digitalWrite(azul, LOW);
  digitalWrite(rojo, HIGH);
  delay(milisegundos * 2);
}
