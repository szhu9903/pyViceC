void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(5, HIGH);
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(200);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
}
