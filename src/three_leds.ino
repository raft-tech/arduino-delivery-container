int LED_1=13;
int LED_2=12;
int LED_3=11;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
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
  digitalWrite(LED_3, HIGH);
  delay(1000);
  digitalWrite(LED_3, LOW);
  delay(1000);
}
