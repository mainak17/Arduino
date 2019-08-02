void setup() 
{
  Serial.begin(9600);
pinMode(A0,INPUT);//Sensor 0 input
pinMode(A1,INPUT);//Sensor 1 input
pinMode(A2,INPUT);//Sensor 2 input
pinMode(6,OUTPUT);//Motor 1 input
pinMode(9,OUTPUT);//Motor 1 input
pinMode(10,OUTPUT);//Motor 2 input
pinMode(11,OUTPUT);//Motor 2 input
}

void loop() {
int i=3;//Co-ordinate of X destination
int j=3;//Co-ordinate of Y destination
int x=0;//Co-ordinate of X initial position
int y=0;//Co-ordinate of Y initial position
int s0=digitalRead(A0);//digital value of Sensor 0
int s1=digitalRead(A1);//digital value of Sensor 1
int s2=digitalRead(A2);//digital value of Sensor 2
if((s2==0)&&(s1==1)&&(s0==0))
{
  forward();
}
if((s2==1)&&(s1==1)&&(s0==1))
{
  y++;

if(y==j)
 {
  stop1();
 }
 else 
 {
  forward(); 
 }
 

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
