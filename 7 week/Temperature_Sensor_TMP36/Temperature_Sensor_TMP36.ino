void setup( ) {
  Serial.begin(9600); // 직렬 포트 초기화
}

void loop( ) {
  int reading = analogRead(55); // 온도 센서 읽기
  // ADC 반환값을 전압으로 변환
  float voltage = reading * 5.0 / 1024.0;
  Serial.print (voltage);
  Serial.print (" V : ");
  // 전압에 100을 곱하면 섭씨온도를 얻을 수 있다.
  float temperatureC = voltage * 100;
  Serial.print (temperatureC);
  Serial.print (" C, ");
  // 화씨온도로 변환
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print (temperatureF);
  Serial.println(" F");
  delay(1000);
}
