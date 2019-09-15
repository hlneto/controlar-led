const int ENTRADA = A5;
const int LED = 12;

void setup() {
  pinMode(ENTRADA, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int valorLido = analogRead(ENTRADA);
  analogWrite(LED, valorLido / 2);
  delay(100);
}
