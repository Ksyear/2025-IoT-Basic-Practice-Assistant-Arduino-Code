# 아두이노 기초 실습 코드 모음

본 저장소는 IoT 기초실습 과목의 조교 활동 중 제작된 아두이노 실습 예제 코드를 포함하고 있습니다. 각 주차별로 학생들이 따라할 수 있도록 체계적으로 구성되어 있습니다.

## 📚 실습 구성

### 1주차 - Arduino 기초
- **LED_Blink**: 기본 LED 깜빡임 제어

### 2주차 - 시리얼 통신 기초
- **Serial_Monitor**: 시리얼 모니터 기본 사용법
- **Number**: 숫자 데이터 처리
- **String**: 문자열 처리
- **ASCII**: ASCII 코드 사용
- **String_sorting**: 문자열 정렬

### 3주차 - LED 제어 심화
- **LED_Blink_Basic**: LED 깜빡임 기본
- **LED_Sequential**: LED 순차 제어
- **LED_Serial_Control**: 시리얼 통신으로 LED 제어
- **LED_Bitmask_Control**: 비트마스크를 이용한 LED 제어

### 4주차 - 버튼 입력
- **Button_Read_Basic**: 기본 버튼 입력 읽기
- **Button_Pullup_Internal**: 내부 풀업 저항 사용
- **Button_LED_Direct**: 버튼으로 LED 직접 제어
- **Button_LED_Pattern**: 버튼으로 LED 패턴 제어
- **Button_Counter**: 버튼 카운터

### 5주차 - 아날로그 입력 & PWM
- **Analog_Read_Potentiometer**: 가변저항 아날로그 입력
- **PWM_Brightness_Control**: PWM을 이용한 LED 밝기 제어
- **PWM_Multi_LED_Brightness**: 여러 LED 밝기 제어
- **Potentiometer_LED_Count**: 가변저항으로 LED 개수 제어
- **RGB_LED_Color_Fade**: RGB LED 색상 페이드 효과

### 6주차 - 타이밍 제어
- **LED_Toggle_Simple**: 간단한 LED 토글
- **LED_Button_Delay**: delay 함수를 이용한 버튼 제어
- **LED_Button_Millis**: millis 함수를 이용한 버튼 제어
- **LED_Millis_Counter**: millis를 이용한 카운터
- **LED_Variable_Interval**: 가변 간격 LED 제어
- **LED_Button_Debouncing**: 버튼 디바운싱 처리

### 7주차 - 센서 & 부저
- **Light_Sensor_CDS**: 조도 센서 (CDS) 사용
- **Temperature_Sensor_TMP36**: 온도 센서 (TMP36) 사용
- **Buzzer_Melody_School_Bell**: 부저로 학교종 멜로디 재생

### 8주차 - 7 Segment 디스플레이
- **Segment_Basic_Display**: 7 세그먼트 기본 표시
- **Segment_Counter**: 7 세그먼트 카운터
- **Segment_Timer**: 7 세그먼트 타이머
- **Segment_Potentiometer**: 가변저항으로 7 세그먼트 제어

### 9주차 - LCD 디스플레이
- **LCD_Basic_Print**: LCD 기본 출력
- **LCD_Cursor_Position**: LCD 커서 위치 제어
- **LCD_Custom_Characters**: LCD 커스텀 문자 생성
- **LCD_Random_Characters**: LCD 랜덤 문자 출력

## 🛠️ 개발 환경

- **플랫폼**: Arduino
- **개발 도구**: Arduino IDE (1.8.x 이상 권장)
- **보드**: Arduino Uno 또는 호환 보드

## 📋 사용 방법

### 1. Arduino IDE 설치
[Arduino 공식 웹사이트](https://www.arduino.cc/en/software)에서 Arduino IDE를 다운로드하여 설치합니다.

### 2. 코드 업로드
1. 원하는 실습 주차의 폴더로 이동
2. `.ino` 파일을 Arduino IDE로 열기
3. 보드와 포트 선택 (도구 > 보드 & 포트)
4. 업로드 버튼 클릭

### 3. 시리얼 모니터 사용
일부 예제는 시리얼 모니터를 통해 결과를 확인합니다:
- Arduino IDE에서 `도구 > 시리얼 모니터` 선택
- Baud Rate를 코드에 맞게 설정 (대부분 9600)

## 🔌 하드웨어 연결

### 기본 부품
- Arduino Uno 보드
- LED (다수)
- 저항 (220Ω, 10kΩ 등)
- 푸시 버튼
- 가변저항 (Potentiometer)
- 점퍼 와이어
- 브레드보드

### 주차별 추가 부품
- **7주차**: CDS 조도센서, TMP36 온도센서, 부저
- **8주차**: 7 Segment 디스플레이
- **9주차**: LCD 1602 (I2C 또는 병렬)

> [!NOTE]
> 각 실습 코드의 주석을 참고하여 핀 연결을 확인하세요. 대부분의 코드에는 어느 핀에 부품을 연결해야 하는지 명시되어 있습니다.

## 💡 학습 포인트

- **1-2주차**: Arduino 기본 구조와 시리얼 통신
- **3-4주차**: 디지털 입출력 제어
- **5주차**: 아날로그 입력과 PWM 출력
- **6주차**: 타이밍 제어와 비동기 프로그래밍
- **7주차**: 다양한 센서 활용
- **8-9주차**: 디스플레이 장치 제어

## 📝 참고사항

- 모든 코드는 교육 목적으로 작성되었으며, 학생들의 학습을 돕기 위해 주석이 포함되어 있습니다.
- 코드는 단계별로 난이도가 증가하도록 설계되었습니다.
- 실습 중 문제가 발생하면 시리얼 모니터를 통해 디버깅하는 것을 권장합니다.

## 🤝 기여

본 저장소는 IoT 기초실습 조교 활동의 일환으로 제작되었습니다. 코드 개선이나 추가 실습 예제에 대한 제안은 언제든 환영합니다.

## 📄 라이센스

본 실습 코드는 교육 목적으로 자유롭게 사용 가능합니다.

---

**제작**: IoT 기초실습 조교팀  
**학기**: 2학년 2학기  
**최종 수정**: 2025년
