#include<Servo.h> //Servo 라이브러리를 추가
#include <Adafruit_NeoPixel.h>

#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define Servo_0 40
#define Servo_1 11
#define Servo_2 6
#define Servo_3 5
#define Servo_4 4
#define PIN       42
#define NUMPIXELS 64 //Popular NeoPixel ring size
#define DELAYVAL  30 //Time (in milliseconds) to pause between pixels

Servo servo0;        //Servo 클래스로 servo객체 생성
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

char move[3];
int index = 0;
int Z_angle = 90;
int A_angle = 40;
int B_angle = 40;
int C_angle = 50;
int D_angle = 90;
bool flag = false;

void setup() {
  Serial.begin(9600);

  servo0.attach(Servo_0);
  servo0.write(90);
  servo1.attach(Servo_1);
  servo1.write(0);
  servo2.attach(Servo_2);
  servo2.write(0);
  servo3.attach(Servo_3);
  servo3.write(50);
  servo4.attach(Servo_4);
  servo4.write(0);

  pixels.begin();            // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.show();             // 네오픽셀에 빛을 출력하기 위한 것인데 여기서는 모든 네오픽셀을 OFF하기 위해서 사용한다.
  pixels.setBrightness(255); // 네오픽셀의 밝기 설정(최대 255까지 가능)
}
// ex)'A.45.\n' : 서보선택/각도
void loop() {
  if (flag == true)
  {
    //angle = (int)move[1];

    switch (move[0]) {
      case 'Z':
        SER_0();
        break;
      case 'A':
        SER_1();
        break;
      case 'B':
        SER_2();
        break;
      case 'C':
        SER_3();
        break;
      case 'D':
        SER_4();
        break;
      case '0':
        SET_ON();
        break;
      case '1':
        SET_OFF();
        break;
    }
    //delay(10);
    //Serial.write("ok\n");
    flag = false;
  }
}

void serialEvent()
{
  char myChar = (char)Serial.read();
  move[index] = myChar;
  index++;
  if (myChar == '\n')
  {
    flag = true;
    index = 0;

    //Serial.print(move[0]);
    //Serial.print(move[1]);
    //Serial.print(move[2]);
  }
}
void SET_ON()
{
  servo0.write(91);
  servo2.write(38);
  //delay(2000);
  servo1.write(38);
  servo3.write(88);
  servo4.write(90);

  Z_angle = 91;
  A_angle = 38;
  B_angle = 38;
  C_angle = 88;
  D_angle = 90;

  for (int i = 0; i < NUMPIXELS; i++) // For each pixel...
  {
    pixels.setPixelColor(i, pixels.Color(0,0,255));
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(DELAYVAL); // Pause before next pass through loop
  }
}
void SET_OFF()
{
  servo4.write(0);
  servo0.write(90);
  delay(1000);
  servo1.write(0);
  servo2.write(0);
  servo3.write(50);

  Z_angle = 90;
  A_angle = 0;
  B_angle = 0;
  C_angle = 50;
  D_angle = 0;
  for (int i = 0; i < NUMPIXELS; i++) // For each pixel...
  {
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(DELAYVAL); // Pause before next pass through loop
  }
}

/*CHANGE------------------------------------------------------------*/
void SER_0()
{
  if (move[1] == 'i') {
    Z_angle += 2;
    if (Z_angle > 180) Z_angle = 179;
    servo0.write(Z_angle);
  }
  else if (move[1] == 'j') {
    Z_angle -= 2;
    if (Z_angle < 0) Z_angle = 0;
    servo0.write(Z_angle);
  }
}
void SER_1()
{
  if (move[1] == 'i') {
    A_angle += 2;
    if (A_angle > 110) A_angle = 110;
    servo1.write(A_angle);
  }
  else if (move[1] == 'j') {
    A_angle -= 2;
    if (A_angle < 20) A_angle = 20;
    servo1.write(A_angle);
  }
}
void SER_2()
{
  if (move[1] == 'i') {
    B_angle += 2;
    if (B_angle > 120) B_angle = 120;
    servo2.write(B_angle);
  }
  else if (move[1] == 'j') {
    B_angle -= 2;
    if (B_angle < 0) B_angle = 0;
    servo2.write(B_angle);
  }
}
void SER_3()
{
  if (move[1] == 'i') {
    //C_angle+=2;
    //if (B_angle < 100) 
    C_angle++;
    servo3.write(C_angle);
  }
  else if (move[1] == 'j') {
    //C_angle-=2;
    //if (B_angle > 0) 
    C_angle--;
    servo3.write(C_angle);
  }
}
void SER_4()
{
  if (move[1] == 'i') {
    D_angle += 1;
    //if(D_angle > 180) D_angle = 179;
    servo4.write(D_angle);
  }
  else if (move[1] == 'j') {
    D_angle -= 1;
    //if(D_angle < 0) D_angle = 0;
    servo4.write(D_angle);
  }
}
