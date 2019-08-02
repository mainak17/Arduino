
#define TopSpeed 80 // PWM value of ENABLE Pin For Straight Line
#define SpinSpeed 65 // PWM value of ENABLE Pin For Spin
#define TurnSpeed 65 // PWM value of ENABLE Pin For Turns
//This Code is for black lines we take complement ~ for white
//unsigned long time;
void setup() {
 pinMode(A0,INPUT);//For IRSensor1 Right
 pinMode(A1,INPUT);//For IRSensor2 Middle
 pinMode(A2,INPUT);//For IRSensor3 Left
 pinMode(A3,INPUT);//For IRSensor3 Left
 pinMode(4,OUTPUT);//For M1 Output Pin1
 pinMode(5,OUTPUT);//For M1 Output Pin2
 pinMode(6,OUTPUT);//For M2 Output Pin1
 pinMode(7,OUTPUT);//For M2 Output Pin2
 pinMode(9,OUTPUT);//For M1 ENABLE Pin1
 pinMode(10,OUTPUT);//For M2 ENABLE Pin2
 //Serial.begin(9600);
}

void loop() {
  int i;
//  int c=0;
  int S0=digitalRead(A0);//For IRSensor1 Right
  int S1=digitalRead(A1);//For IRSensor2 Middle
  int S2=digitalRead(A2);//For IRSensor1 Right 
  int S3=digitalRead(A3);//For IRSensor1 Front
  //Serial.println(S1);
if((S2==0)&&(S1==1)&&(S0==0))
 {
  analogWrite(9,TopSpeed);
  analogWrite(10,TopSpeed);
 Forward();
 }
 if((S2==0)&&(S1==0)&&(S0==1))
 {
  analogWrite(9,SpinSpeed);
  analogWrite(10,SpinSpeed);
 RightSpin();
 }
 if((S2==1)&&(S1==0)&&(S0==0))
 {
  analogWrite(9,SpinSpeed);
  analogWrite(10,SpinSpeed);
 LeftSpin();
 }
 if((S2==0)&&(S1==1)&&(S0==1))
 {
  analogWrite(9,TurnSpeed);
  analogWrite(10,TurnSpeed);
 RightSpin();
 //RightTurn();
 }
 if((S2==1)&&(S1==1)&&(S0==0))
 {
  analogWrite(9,TurnSpeed);
  analogWrite(10,TurnSpeed);
 LeftSpin();
 //LeftTurn();
 }
 if((S2==0)&&(S1==0)&&(S0==0))
 {
  analogWrite(9,TurnSpeed);
  analogWrite(10,TurnSpeed);
 Forward();
 }
 if((S2==1)&&(S1==1)&&(S0==1))
 {
  //analogWrite(9,TurnSpeed);
  //analogWrite(10,TurnSpeed);
 Stop();
 }
 /*if((S3==1)&&(S2==1)&&(S1==1)&&(S0==1))
 {
    for(i=0;i<500;i++)
    if(i>2000)  
    Stop();
  else
    Forward();
 }
  /* if((S2==1)&&(S1==1)&&(S0==1))
   *  {
   *  time = micros();
   *  if(time>1500)
   *  { 
   *  Stop();
   *  }
   *  else
   *  Forward();
   *  }
   */
 
 /* if((S2==1)&&(S1==1)&&(S0==1))
 {
  for(i=0;i<5000;i++)
  {
    if(i>3000)
    {
      Stop();
      }
      else {
      
        analogWrite(9,TurnSpeed);
        analogWrite(10,TurnSpeed);
        Forward();
        }
     
  }
  //Forward();
 }
if((S2==1)&&(S1==0)&&(S0==1))
 {
  analogWrite(9,SpinSpeed);
  analogWrite(10,SpinSpeed);
 Back();
delay(500);
}
*/

}

void Forward()
{
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
}
void Back()
{
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
}

  void RightSpin()
  {
   digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,0); 
    }
 void LeftSpin()
 {
   digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
  }

  void RightTurn()
  {
 digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,0);
    }
    
  void LeftTurn()
  {
 digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,1);
    }
    void Stop()
    {
   digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
      }
