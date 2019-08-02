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
 Serial.begin(9600);
 analogWrite(9,255);
  analogWrite(10,255);
 }

void loop() {
   int S0=digitalRead(A0);
  int S1=digitalRead(A1);
  int S2=digitalRead(A2); 
 
// if((S2==0)&&(S1==1)&&(S0==0))
// {
//   analogWrite(9,255);
//  analogWrite(10,255);
//  Serial.println("Forward");
// Forward();
// }
//
// if((S2==0)&&(S1==0)&&(S0==1))
// {
//   analogWrite(9,255);
//  analogWrite(10,255);
//  Serial.println("Right Turn");
// RightTurn();
// }
Forward();
delay(3000);
RightTurn();
delay(3000);
LeftTurn();
delay(3000);

}

void Forward()
{
 digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
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
