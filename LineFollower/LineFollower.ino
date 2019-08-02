  
#define TopSpeed 250 // PWM value of ENABLE Pin For Straight Line
#define SlowSpeed 150 // PWM value of ENABLE Pin For Turns

void setup() {
 pinMode(A0,INPUT);//For IRSensor1 Right
 pinMode(A1,INPUT);//For IRSensor2 Middle
 pinMode(A2,INPUT);//For IRSensor3 Left
 pinMode(4,OUTPUT);//For M1 Output Pin1
 pinMode(5,OUTPUT);//For M1 Output Pin2
 pinMode(6,OUTPUT);//For M2 Output Pin1
 pinMode(7,OUTPUT);//For M2 Output Pin2
  pinMode(9,OUTPUT);//For M1 ENABLE Pin1
 pinMode(10,OUTPUT);//For M2 ENABLE Pin2
}

void loop() {
  int S0=digitalRead(A0);//For IRSensor1 Right
  int S1=digitalRead(A1);//For IRSensor2 Middle
  int S2=digitalRead(A2);//For IRSensor1 Right  

  analogWrite(9,TopSpeed);
  analogWrite(10,TopSpeed);
LeftSpin();
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
 void Forward()
 {
  digitalWrite(4,1);
digitalWrite(5,0);
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
digitalWrite(5,0);
digitalWrite(6,1);
digitalWrite(7,0);
  }  
  void LeftTurn()
  {
    digitalWrite(4,1);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
    }  
