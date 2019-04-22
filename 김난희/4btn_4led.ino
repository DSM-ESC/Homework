int sw1=3;
int sw2=4; 
int sw3=5;
int sw4=5;

int LED1=6;
int LED2=7;
int LED3=8;
int LED4=9;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  pinMode(sw4, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(sw1) == LOW) // sw1가 LOW라면 LED1, 3가 켜진다.
 {
   digitalWrite(led1, HIGH);
   digitalWrite(led2 LOW);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, LOW);
 }
 if(digitalRead(sw2) == LOW) // sw2가 LOW라면 LED2, 4가 켜진다.
 {
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, LOW);
   digitalWrite(led4, HIGH);
 }
 if(digitalRead(sw3) == LOW) // sw3가 LOW라면 LED가 전부 켜진다.
 {
   digitalWrite(led1, HIGH);
   digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
 }
 if(digitalRead(sw4) == LOW) // sw4가 LOW라면 LED가 전부 꺼진다.
 {
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
 }
}
