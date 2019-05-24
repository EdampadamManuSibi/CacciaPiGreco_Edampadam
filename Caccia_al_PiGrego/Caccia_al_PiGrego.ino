#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int btnpos1 = 1;
int btnpos2 = 2;
int btnpos3 = 3;
int btnpos4 = 4;
int btnpos5 = 5;
int btnstart = 6;
int tempo = 4000;
int vite = 5;
int punteggio = 0;
int jolly = 0;
int penality = 0;
int record = 0;
int posizioneRandom = 0;
int tempopassato = 0;
int a = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (btnpos1, INPUT);
  pinMode (btnpos2, INPUT);
  pinMode (btnpos3, INPUT);
  pinMode (btnpos4, INPUT);
  pinMode (btnpos5, INPUT);
  pinMode (btnstart, INPUT);
  vite = 5;
  punteggio = 0;
  jolly = 0;
  penality = 0;
  record = 0;
  posizioneRandom = 0;
  lcd.init();
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  vite = 5;
  punteggio = 0;
  lcd.setCursor (0, 0);
  lcd.print("Vite:" + String(vite));
  lcd.setCursor (8, 0);
  lcd.print ("Record:" + String(record));
  if (digitalRead(btnstart) == HIGH)
  {
    while (vite > 0);
    {
      Random();
      lcd.setCursor(0, 0);
      lcd.print("Vite:" + vite);
      lcd.setCursor(6, 0);
      lcd.print("Record:" + record);
      if (punteggio > record)
      {
        record = punteggio;
      }
    }
  }
}

void Random() {
  posizioneRandom = random (1, 6);
  lcd.setCursor (1, (posizioneRandom * 3) - 1);
  if (posizioneRandom == 1)
  {
    lcd.print("+");
    CarattereBonus(posizioneRandom);
  }
  else if (posizioneRandom == 2)
  {
    lcd.print("-");
    CaratterePenality();
  }
  else
  {
    lcd.print("$");
    CaratterePigreco(posizioneRandom);
  }
}

void CaratterePigreco (int pos) {
  while (tempopassato < tempo)
  {
    if (digitalRead(pos) == HIGH)
    {
      punteggio++;
      tempo = tempo - 30;
      break;
    }
    else
    {
      for (a = 1; a < 6; a++)
      {
        if (digitalRead(a) == HIGH && pos != a)
        {
          vite--;
          tempo = tempo - 30;
          break;
        }
      }
      if (a != 6)
      {
        break;
      }
      tempopassato++;
      delay(1);
    }
    if (tempopassato == tempo)
    {
      vite--;
      tempo = tempo - 30;
    }
  }
}

void CarattereBonus(int pos) {
  while (tempopassato < tempo)
  {
    if (digitalRead(pos) == HIGH)
    {
      vite++;
      break;
    }
    else
    {
      for (a = 1; a < 6; a++)
      {
        if (digitalRead(a) == HIGH && pos != a)
        {
          vite--;
          tempo = tempo - 30;
          break;
        }
      }
      if (a != 6)
      {
        break;
      }
      tempopassato++;
      delay(1);
    }
  }
}
void CaratterePenality () {
  while (tempopassato < tempo)
  {
    for (a = 1; a < 6; a++)
    {
      if (digitalRead(a) == HIGH)
      {
        vite--;
        tempo = tempo - 30;
        break;
      }
    }
    if (a != 6)
    {
      break;
    }
    tempopassato++;
    delay(1);
  }
}
