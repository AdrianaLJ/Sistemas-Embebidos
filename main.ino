// Definir el pin al que está conectado el LED
int ledPin = 13;

void setup() {
  // Iniciar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  
  // Esperar 1000 milisegundos (1 segundo)
  delay(1000);
  
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  
  // Esperar 1000 milisegundos (1 segundo)
  delay(1000);
}
