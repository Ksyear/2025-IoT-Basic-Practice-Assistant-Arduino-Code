void setup() {
  Serial.begin(9600); // 직렬 포트 초기화
}

void loop() {
  int reading = analogRead(56); // 조도 센서 읽기
  Serial.print("ADC : ");
  Serial.print(reading);
  // ADC 반환 값을 전압으로 변환
  float voltage = reading * 5.0 / 1024.0;
  Serial.print(", Voltage : ");
  Serial.println(voltage);
  delay(1000);
}
