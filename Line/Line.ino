void setup() {

pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);// put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(5000);
}
