int piezo = 3;
int del = 4;
int sw = 5;

#define C 523
#define D 587
#define E 659
#define F 698
#define G 783
#define A 880
#define B 987
#define C1 1046

void setup() {
  // put your setup code here, to run once:
  pinMode(piezo,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sw)==LOW){
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,E);
    delay(2000)
    analogWrite(piezo,F);
    delay(1000)
    analogWrite(piezo,D);
    delay(1000)
    analogWrite(piezo,D);
    delay(2000)
    analogWrite(piezo,C);
    delay(1000)
    analogWrite(piezo,D);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,F);
    delay(1000)
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,G);
    delay(2000)
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,F);
    delay(1000)
    analogWrite(piezo,D);
    delay(1000)
    analogWrite(piezo,D);
    delay(2000)
    analogWrite(piezo,C);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,G);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,E);
    delay(1000)
    analogWrite(piezo,E);
  }
  else (
    analogRead(piezo,LOW)
    
}