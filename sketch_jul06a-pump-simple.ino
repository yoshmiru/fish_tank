const int PIN = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN, HIGH);
  delay(1150);
  digitalWrite(PIN, 0);
  delay(600000);
}
