int led1 = 1;int led2 = 2;int led3 = 3;int led4 = 4;int sw1 = 5;int sw2 = 6;int sw3 = 7;int sw4 = 8;void setup() {  pinMode(sw1, INPUT_PULLUP);  pinMode(sw2, INPUT_PULLUP);  pinMode(sw3, INPUT_PULLUP);  pinMode(sw4, INPUT_PULLUP);  pinMode(led1, OUTPUT);  pinMode(led2, OUTPUT);  pinMode(led3, OUTPUT);  pinMode(led4, OUTPUT);}void loop() {  int state1;  int state2;  int state3;  int state4;    state1 = digitalRead(sw1);  state2 = digitalRead(sw2);  state3 = digitalRead(sw3);  state4 = digitalRead(sw4);    if(state1==LOW)  {    digitalWrite(led1, HIGH);    digitalWrite(led3, HIGH);  }    else if(state2==LOW)  {    digitalWrite(led2, HIGH);    digitalWrite(led4, HIGH);  }    else if(state3==LOW)  {    digitalWrite(led1, HIGH);    digitalWrite(led2, HIGH);    digitalWrite(led3, HIGH);    digitalWrite(led4, HIGH);  }    else if(state==LOW)  {    digitalWrite(led1, LOW);    digitalWrite(led2, LOW);    digitalWrite(led3, LOW);    digitalWrite(led4, LOW);  }}