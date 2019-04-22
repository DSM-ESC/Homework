// CDS(조도센서)와 LED 한개로 만든다. 
// 어두운 곳에서 LED가 켜지고 
// 밝은 곳에서 LED가 꺼진다. 

int cds = A0; // 조도센서는 A0핀에 연결 
int LED = 9; // LED는 9번 핀에 연결 

void setup() {
  pinMode(cds,INPUT); // cds로 입력받기 
  pinMode(LED,OUTPUT); // LED로 출력하기  
} 

void loop() {
  cds = analogRead(A0); // cds로 들어오는 핀에서 값을 읽기 
  
  if(cds < 500) 
  {
    digitalWrite(LED,HIGH); // cds센서로 들어오는 값이 500보다 작으면 LED키기 
  }
  
  else 
  {
    digitalWrite(LED,LOW); // cds센서로 들어오는 값이 500보다 크면 LED끄기 
  }
}
