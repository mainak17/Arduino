/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int i=1;
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(2,OUTPUT);
  pinMode(6,INPUT);
  
}

// the loop function runs over and over again forever
void loop() 
{
  int a=digitalRead(6);
  if(a==0)
   {
    delay(200);
    i++;
   }   
  if ((i%2)==0)   
   {
    digitalWrite(2,HIGH);
   }
  else 
    {
      digitalWrite(2,LOW);
    }
    
}

