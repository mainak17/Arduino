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

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(2,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

// the loop function runs over and over again forever
void loop() 
{ 
  int sw1=digitalRead(6);
  int sw2=digitalRead(7);
  if(sw1==0)
  {
    led(10);
    
    }
  else if(sw2==0)
  {
    led(5);
    }
    
}
void led(int i)
{
  for(int x=1;x<=i;x++)
  {
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  }
