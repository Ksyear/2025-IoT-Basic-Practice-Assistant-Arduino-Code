int pin_LED = 13; // LED 연결 핀
boolean LED_state = false; // LED 상태

void setup() {
  pinMode(pin_LED, OUTPUT);
  digitalWrite(pin_LED, LED_state);
}

void loop() {
  LED_state = !LED_state; // LED 상태 반전
  digitalWrite(pin_LED, LED_state); // LED 출력
  delay(1000);
}
