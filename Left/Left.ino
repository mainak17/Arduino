int s0=digitalRead(2);
int s1=digitalRead(3);
int s2=digitalRead(4);


void setup() {
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
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
}
