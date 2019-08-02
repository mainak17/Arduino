#include <NewPing.h>

#define TopSpeed 75 // PWM value of ENABLE Pin For Straight Line
#define SpinSpeed 55 // PWM value of ENABLE Pin For Spin
#define TurnSpeed 55 // PWM value of ENABLE Pin For Turns

unsigned int D;
int t1=0,t2=0;
NewPing sonar(12,13,20);
void setup() {
 pinMode(A0,INPUT);//For IRSensor1 Right
 pinMode(A1,INPUT);//For IRSensor2 Middle
 pinMode(A2,INPUT);//For IRSensor3 Left
 pinMode(A3,INPUT);//For IRSensor Front
 pinMode(4,OUTPUT);//For M1 Output Pin1
 pinMode(5,OUTPUT);//For M1 Output Pin2
 pinMode(6,OUTPUT);//For M2 Output Pin1
 pinMode(7,OUTPUT);//For M2 Output Pin2
 pinMode(9,OUTPUT);//For M1 ENABLE Pin1
 pinMode(10,OUTPUT);//For M2 ENABLE Pin2
}

void loop() {
  Forward();
  delay(500);
 /* D=sonar.ping_cm();
  int S0=digitalRead(A0);//For IRSensor1 Right
  int S1=digitalRead(A1);//For IRSensor2 Middle
  int S2=digitalRead(A2);//For IRSensor1 Right
  int S3=digitalRead(A3);//For IRSensor1 Right  
  t1=0;
  t2=0;
if(D<20) 
{//If ultrasonic sensor reads an obstruction in the vicinity of max distance then stop robo ;
 Stop();
 delay(1000);
 }  //Delay of 1 second
 
else if((S0==1)&&(S2==0)) 
  { //If left IR sensor reads black line then turn robot to right
    //       if(t1>=20) 
      //     {
           Back();
           delay(500);
           RightSpin();
           delay(1000); 
    /}
 else {
 RightSpin();
 //t1+=1; } }
 else if((S0==0)&&(S2==1)) { //If left IR sensor reads black line then move the robot left
 if(t2>=20) { //If the robot is stuck while moving left then move robot back for 0.5 seconds and move robot left for 1 second.
RightSpin(); //right motor anticlockwise, moving backward when stuck
 delay(500);
 LeftSpin();
 delay(1000); }
 else {
 LeftSpin();
 delay(500);
 t2+=1; } }
 else if((S0==0)&&(S2==0)) { //If the two IR sensor reads black line at both sides then the robot moves forward
Forward();
 t1=0;
 t2=0; } }}
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
