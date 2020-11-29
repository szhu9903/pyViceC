

int led = 9;
// 初始
int brightness = 20;
// 增量
int fadeAmount = 5;


void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 20 || brightness==255){
    fadeAmount = -fadeAmount;
  }
  delay(20);
}
