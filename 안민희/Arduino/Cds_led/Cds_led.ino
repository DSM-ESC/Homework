int led =3;
int cds =4;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int home = analogRead(cds);
  Serial.print("cds = ");
  Serial.println(home);

  if(home<500){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}