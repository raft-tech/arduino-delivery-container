
int LED_1=13;
int LED_2=12;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  delay(1000);
  digitalWrite(LED_1, LOW);
  delay(1000);
  digitalWrite(LED_2, HIGH);
  delay(1000);
  digitalWrite(LED_2, LOW);
  delay(1000);
}
