void setup() {
  // put your setup code here, to run once:
Serial.begin(9600) ;

}

void loop() {
  // puint t your main code here, to run repeatedly:
int a=analogRead(A0);
analogWrite(3,a);

}
