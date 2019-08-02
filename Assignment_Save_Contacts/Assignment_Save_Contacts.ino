
#include <Keypad.h>
String contacts[3];
contacts[3]=('HETC','IIEST','IITKGP');
char number[3]={'123','456','789'};
char num[10];
int i=0;
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
void setup(){
  Serial.begin(9600);
}
  
void loop(){
  
  char key = keypad.getKey();
  if (key)
  {
    Serial.println(key);
    num[i]=key;
    i++;
    if(i==3)
    { 
      Serial.println("Given Number Is : ");
      Serial.println(num);
      }
   }

   
   for(int j=0;j<3;j++)
   {
   if(number[j]==num[j])
   {
    Serial.println("This Number Is Saved As : ");
    Serial.println(contacts[j]);
   }
   else
   Serial.println("This Number Is Not Saved");
   } 
      
}
