
#define trigPin 3 // define the pins of your sensor
#define echoPin 5 
 
void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
  Serial.begin(9600); // begin serial communitication  
  Serial.println("Motor test!");
   pinMode(trigPin, OUTPUT);// set the trig pin to output (Send sound waves)
  pinMode(echoPin, INPUT);// set the echo pin to input (recieve sound waves)
}
 



void loop() {
int x=2,y=3,i,j; 
int s0=digitalRead(A0);
int s1=digitalRead(A1);
int s2=digitalRead(A2);



 
  // put your main code here, to run repeatedly:
 
if((s2==1)&&(s1==0)&&(s0==0))
 {
  left();
 }
  
else  if((s2==1)&&(s1==1)&&(s0==0))
 {
  left_spin();
 }
 else if((s2==0)&&(s1==1)&&(s0==0))
 {
  forward();
 }
 else if((s2==0)&&(s1==0)&&(s0==1))
 {
  right();
 }
 else if((s2==0)&&(s1==1)&&(s0==1))
  {
  right_spin();
  }
else if((s2==1)&&(s1==1)&&(s0==1))
{ 
  
  forward();
  }
  


  long duration, distance; // start the scan
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); // delays are required for a succesful sensor operation.
  digitalWrite(trigPin, HIGH);

  delayMicroseconds(10); //this delay is required as well!
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;// convert the distance to centimeters.
  if (distance < 25)/*if there's an obstacle 25 centimers, ahead, do the following: */ {   
Serial.println ("Close Obstacle detected!" );
Serial.println ("Obstacle Details:");
Serial.print ("Distance From Robot is " );
Serial.print ( distance);
Serial.print ( " CM!");// print out the distance in centimeters.

Serial.println (" The obstacle is declared a threat due to close distance. ");
Serial.println (" Turning !");
    right_spin();
}
  else {
   Serial.println ("No obstacle detected. going forward");
   delay (15);
   forward(); 
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
 
