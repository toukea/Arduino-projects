int ledPower = 255;
int direct = -1;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_BUILTIN, ledPower);
  delay(2000);
  ledPower = ledPower + (direct * 50);
  if (ledPower <= 0) {
    ledPower = 0;
    direct = 1;
  } else if (ledPower >= 255) {
    ledPower = 255;
    direct = -1;
  }
}
