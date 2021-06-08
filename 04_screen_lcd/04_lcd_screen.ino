/**
 * Code example for printing Hello World 
 * on an 16x02 LCD display.
 */

// include the library for LCD display
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
#define RS 12
#define EN 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  // set up the size (column/rows) of the LCD's display
  lcd.begin(16, 2);
  // Print on the LCD display
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor at the begining of the second row
  lcd.setCursor(0, 1);
  // print the number of seconds since the begining
  lcd.print(millis() / 1000);
}

