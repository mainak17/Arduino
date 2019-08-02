void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);// put your setup code here, to run once:
}

void loop() {
int s0=digitalRead(A0);
int s1=digitalRead(A1);
int s2=digitalRead(A2);

 
  // put your main code here, to run repeatedly:
 
if((s2==1)&&(s1==0)&&(s0==0))
 {
  right();
 }
  
else  if((s2==1)&&(s1==1)&&(s0==0))
 {
  right_spin();
 }
 else if((s2==0)&&(s1==1)&&(s0==0))
 {
  forward();
 }
 else if((s2==0)&&(s1==0)&&(s0==1))
 {
  left();
 }
 else if((s2==0)&&(s1==1)&&(s0==1))
  {
  left_spin();
  }
else if((s2==1)&&(s1==1)&&(s0==1))
{ 
  
  stop1();
  }
  
  
  
}

void stop1()
{
  digitalWrite(6,0);
 digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  
  }
void right()
{ 
  
  digitalWrite(6,1);
 digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,LOW);
   
 } 
void left_spin()
{ 
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
 }
void forward()
{
   digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
   digitalWrite(11,LOW);
}  
void left()
{
   digitalWrite(6,0);
    digitalWrite(9,LOW);
    digitalWrite(10,1);
    digitalWrite(11,0);
}
void right_spin()
{ 
   digitalWrite(6,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,HIGH);
 }
