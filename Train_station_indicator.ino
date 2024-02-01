#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String reminder[] = {
  "                Next station > Mulund > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) ",
  "                Next station > Ghatkopar > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) ",
  "                Next station > Kurla > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) ",
  "                Next station > Dadar > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) ",
  "                Next station > Byculla > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) ",
  "                Next station > CSMT > Destination > Chhatrapati Shivaji Maharaj Terminus (CSMT) "
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
  lcd.setCursor(0, 0);
}

void loop() {
  for (int i = 0; i < 6; i++) {
    String rem = reminder[i];
    int len = rem.length();

    for (int j = 0; j < len + 16; j++) 
      lcd.clear();
      lcd.print(rem.substring(j, j + 16));
      delay(70);
    }
    lcd.setCursor(0, 1);
    lcd.print(stations[i]);
    delay(600);
    lcd.clear();
    delay(1000);
  }
}
