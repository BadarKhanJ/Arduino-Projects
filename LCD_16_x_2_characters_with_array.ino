#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

// make some custom characters:
byte Heart[8] = {
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

byte Bell[8] = {
0b00100,
0b01110,
0b01110,
0b01110,
0b11111,
0b00000,
0b00100,
0b00000
};

byte A[7] = {
0b00100,
0b01010,
0b10001,
0b10001,
0b11111,
0b10001,
0b10001
};

void setup() 
{
  lcd.init();
  // Make sure backlight is on       
  lcd.backlight();

  // create a new characters
  lcd.createChar(0, Heart);
  lcd.createChar(1, Bell);
  lcd.createChar(2, A);

  // Clears the LCD screen
  lcd.clear();

  // Print a message to the lcd.
  lcd.print("CHARACTER");
}

// Print All the custom characters
void loop() 
{ 
  lcd.setCursor(0, 1);
  lcd.write(0);

  lcd.setCursor(1, 1);
  lcd.write(1);

  lcd.setCursor(2, 1);
  lcd.write(2);
}
