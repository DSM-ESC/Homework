int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int sw1 = 7;
int sw2 =8;
int sw3 = 9;
int sw4 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  pinMode(sw4, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw1)==LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
  }
  else digitalWrite(led1,LOW);
       digitalWrite(led3,LOW);
  
  if(digitalRead(sw2)==LOW){
    digitalWrite(led2,HIGH);
    digitalWrite(led4,HIGH);
  }
  else digitalWrite(led2,LOW);
       digitalWrite(led4,LOW);

  if(digitalRead(sw3)==LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else if(digitalRead (sw4)==LOW){
       digitalWrite(led1,LOW);
       digitalWrite(led2,LOW);
       digitalWrite(led3,LOW);
       digitalWrite(led4,LOW);
  }