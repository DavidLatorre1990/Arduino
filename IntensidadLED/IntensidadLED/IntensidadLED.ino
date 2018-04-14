int led1 = 3;
int led2 = 5;
int led3 = 6;

int potPin = A0;
int potValue = 0;
int brightValue = 0;

void setup() {

  //empty

}

void loop() {

  potValue = analogRead(potPin);
  brightValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(led1, brightValue);
  analogWrite(led2, brightValue);
  analogWrite(led3, brightValue);
  delay(10);

}
