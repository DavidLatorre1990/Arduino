//Parpadeo de LED

void setup() {
  pinMode(13, OUTPUT); // Declaramos el pin 13 como salida

}

void loop() {
   digitalWrite(13, HIGH); // encendemos el LED
   delay (500);           // esperamos
   digitalWrite(13, LOW); // Apaga el LED
   delay (500);           //
}
