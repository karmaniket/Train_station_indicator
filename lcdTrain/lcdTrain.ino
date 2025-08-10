#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String reminder[] = {
  "                Next Station > Mulund > Destination > CSMT ",
  "                Next Station > Ghatkopar > Destination > CSMT ",
  "                Next Station > Kurla > Destination > CSMT ",
  "                Next Station > Dadar > Destination > CSMT ",
  "                Next Station > Byculla > Destination > CSMT ",
  "                Next Station > CSMT > Destination > CSMT "
};

String stations[] = {
  "     Mulund     ",
  "    Ghatkopar   ",
  "      Kurla     ",
  "      Dadar     ",
  "     Byculla    ",
  "      CSMT      "
};

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}
// loop through all 6 stations 
void loop() {
  for (int i = 0; i < 6; i++) {
    String rem = reminder[i];
    int len = rem.length();
    // scroll reminder across the top row from right to left 
    for (int j = 0; j < len + 16; j++) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(rem.substring(j, j + 16));
      delay(70);    // adjust scrolling speed 
    }
    // display current station on bottom row 
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(stations[i]);
    delay(700);   // delay for station name 
    lcd.clear();
    delay(1000);
  }
}
