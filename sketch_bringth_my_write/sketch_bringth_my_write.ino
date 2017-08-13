
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int incomingByte ;
  while (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    analogWrite(LED_BUILTIN, incomingByte);
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    delay(500);
    analogWrite(LED_BUILTIN, 0);
    delay(500);
  }
}
