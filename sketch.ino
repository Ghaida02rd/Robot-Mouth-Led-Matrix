#include <LedControl.h>

int DIN = 12;
int CS =  11;
int CLK = 10;
LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
  lc.shutdown(0,false);       
  lc.setIntensity(0,15);      
}

void loop(){ 
  //Smiley face
    byte SMILEY[8] = {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
    printByte(SMILEY);
    delay(2000);

    //Sad face
    byte SAD[8] = {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};
    printByte(SAD);
    delay(2000);
    
    //Angry face
    byte ANGRY[8] = {0x3C,0x42,0xA5,0x81,0x99,0x81,0x42,0x3C}; 
    printByte(ANGRY);
    delay(2000);

    //Crying face
    byte CRYING[8] = {0x3C,0x42,0xA5,0x81,0x99,0xBD,0x42,0x3C}; 
    printByte(CRYING);
    delay(2000);
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
