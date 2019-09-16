const int INTERRUPTOR = A5;
const int LEDAZUL = 4;

void setup() {
  pinMode(INTERRUPTOR, INPUT);
  pinMode(LEDAZUL, OUTPUT);
}

void loop() {
  int leitura = analogRead(INTERRUPTOR);
  analogWrite(LEDAZUL, leitura/2);
  delay(100);
}
