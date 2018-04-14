const int led1= 13;
const int button1 = 12;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(led1, HIGH);

  }

void loop() {
    if(digitalRead(button1)==LOW)
    
      digitalWrite(led1, HIGH);
    
    else
      digitalWrite(led1, LOW);

}
