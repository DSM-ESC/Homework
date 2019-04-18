// 1개의 버튼과 LED 1개로 만든다.
// 버튼을 누르면 완전히 꺼지고 
// 다시 누르면 켜지고를 반복할 수 있는 프로그램 제작

int led=3; // LED를 3번 핀으로 설정
int sw=5; // 스위치를 5번 핀으로 설정 

void setup() // 
{
 pinMode(led, OUTPUT); // 3번 핀을 OUTPUT으로 설정 

 pinMode(sw, INPUT_PULLUP); // 5번 핀을 INPUT으로 설정
}

void loop() 
{
 if(digitalRead(sw) == LOW) // sw가 LOW라면 LED가 켜진다.
 {
   digitalWrite(led, HIGH);
 }

 else
 {digitalWrite(led, LOW);} // sw가 HIGH라면 LED가 꺼진다.
 
}
