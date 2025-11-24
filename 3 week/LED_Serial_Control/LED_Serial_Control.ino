int pins[] = {2, 3, 4, 5}; // LED 연결 핀
int state = -1; // 현재 켤 LED 인덱스

void setup() {
  Serial.begin(9600); // 시리얼 통신 초기화
  for (int i = 0; i < 4; i++) {
    pinMode(pins[i], OUTPUT); // 출력 모드로 설정
    digitalWrite(pins[i], LOW); // 꺼진 상태로 시작
  }
}

void loop() {
  if (Serial.available()) { // 입력 확인
    char data = Serial.read(); // 데이터 읽기
    Serial.println(String("You entered \'") + data + '\''); // 입력 문자 표시
    if (data >= '1' && data <= '4') { // 유효한 입력인 경우
      state = data - '0' - 1; // LED 인덱스로 변환
      Serial.print("LED ");
      Serial.print(state + 1);
      Serial.println(" is ON...");
    }
    else { // 잘못된 입력인 경우
      Serial.println("* Invalid LED number...");
      state = -1;
    }
    for (int i = 0; i < 4; i++) {
      if (i == state) { // 하나의 LED만 켬
        Serial.print("O ");
        digitalWrite(pins[i], HIGH);
      }
      else { // 나머지는 끔
        Serial.print("X ");
        digitalWrite(pins[i], LOW);
      }
    }
    Serial.println();
  }
}
