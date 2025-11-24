int led = 13; // 디지털 13번 핀에 LED 연결

void setup() {
  pinMode(led, OUTPUT); // 디지털 13번 핀을 출력 모드로 설정
}

void loop() {
  digitalWrite(led, HIGH); // 디지털 13번 핀으로 HIGH(1 또는 ON) 출력
  delay(1000); // 1초(1000ms) 대기
  digitalWrite(led, LOW); // 디지털 13번 핀으로 LOW(0 또는 OFF) 출력
  delay(1000); // 1초(1000ms) 대기
}
