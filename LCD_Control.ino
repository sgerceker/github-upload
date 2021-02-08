#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char text1[]="I  I  I  II I II";
char text2[]="  I I  I   I I  ";

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  unsigned int i=0;
  // set the cursor to (0,0):
 
  lcd.setCursor(0, 1);
  lcd.print(text1);
  lcd.command(0x1C); //Scrolling text to Right
  
  lcd.setCursor(0, 0);
  lcd.print(text2);
  lcd.command(0x1C); //Scrolling text to Right
   
  // clear screen for the next loop:
 // lcd.clear();
delay(500);
}
