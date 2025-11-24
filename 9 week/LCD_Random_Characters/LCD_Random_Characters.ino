#include <LiquidCrystal.h>

// 핀 번호 (RS, E, DB4, DB5, DB6, DB7)
LiquidCrystal lcd(44, 45, 46, 47, 48, 49); // LCD 연결

void setup() {
  lcd.begin(16, 2); // LCD 초기화
  lcd.clear(); // LCD 화면 지우기
  randomSeed(analogRead(A5)); // 난수 생성기 초기화
  Serial.begin(9600);
}

void loop() {
  int row = random(0, 2); // 행 번호 생성
  int col = random(0, 17); // 열 번호 생성
  char ch = random(0, 27); // 출력 문자 생성
  if (ch == 0) ch = ' '; // 공백
  else ch = ch + 'A' - 1; // 대문자
  lcd.setCursor(col, row); // 커서 이동
  lcd.write(ch); // 문자 출력
  // 시리얼 모니터로 정보 출력
  Serial.println(String("( ") + row + ", " + col + " ) " + ch);
  delay(100);
}
