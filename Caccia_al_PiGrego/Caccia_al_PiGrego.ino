#include <LiquidCrystal.h>

int btnpos1 = 1;
int btnpos2 = 2;
int btnpos3 = 3;
int btnpos4 = 4;
int bntpos5 = 5;
int btnstart = 6;
char "$";
char "+";
char "-";
int vite = 5;
int punteggio = 0;
int jolly = 0;
int penality = 0;
int record = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (btnpos1, INPUT);
  pinMode (btnpos2, INPUT);
  pinMode (btnpos3, INPUT);
  pinMode (btnpos4, INPUT);
  pinMode (btnpos5, INPUT);
  lcd.begin (16, 2);
  // Nel gioco, nella seconda riga su 5 posizioni devono apparire a caso il simbolo
  //Sotto a quelle 5 posizioni ci sarà un pulsante da schiacciare, come il gioco della talpa che viene fuori e
  //Devi battere sul pulsante, se le schiaccia avendo 5 vite iniziali va avanti, altrimenti perde una vita.
  // Il record si calcola con il numero di volte che sei andato avanti senza finire le 5 vite
  //Inoltre tra quelle 5 posizioni, mettere anche dei caratteri jolly che ti aumentano le vite,
  //E dei caratteri penality che escono a rondom che però ti fanno perdere le vite
}

void loop() {
  // put your main code here, to run repeatedly:
  if (btnstart == HIGH)
  {
    Random();
    Bottoni();
   lcd.setCursor (0 ,1)
   lcd.print ("Vite :" + String(vite) + " Record:" + String(record);
  }    //I print dei simboli, vite e record stampati sulla prima riga.
}

void Random() {
  posizoneRandom = random (1, 6);
  lcd.setCursor (1, posizoneRandom);
  lcd.print = ("$");
  lcd.setCursor (1, posioneRandom );             
  lcd.print = ("+");
  lcd.setCursor (1, posizioneRandom );
  lcd.print = ("-");  
}

void Bottoni() {                                                           
  if ( posizioneRandom == 1)
  {
    if (digitalRead(btnpos1) == HIGH)
    {
      punteggio++;
    }
    else if (tempo < contatempo)
    {
      vite--;
    }
    {
      else Bottoni()
      }
  }
  if ( posizioneRandom == 2)
  {
    if (digitalRead(btnpos2) == HIGH)
    {
      punteggio++;
    }
    else if (tempo < contatempo)
    {
      vite--;
    }
{
  else Bottoni()
}    
}
  }
  if ( posizioneRandom == 3)
  {
    if (digitalRead(btnpos3) == HIGH)
    {
      punteggio++;
    }
    else if (tempo < contatempo)
    {
      vite--;
    }
    {
      else Bottoni()
    }
  }
  if ( posizioneRandom == 4)
  {
    if (digitalRead(btnpos4) == HIGH)
    {
      punteggio++;
    }
    else if (tempo < contatempo)
    {
      vite--;
    }
  {
    else Bottoni()
  }  
  }
  if ( posizioneRandom == 5)
  {
    if (digitalRead(btnpos5) == HIGH)
    {
      punteggio++;
    }
    else if (tempo < contatempo)
    {
      vite--;
    }
    { 
     else Bottoni ()
    }
  }
}

void CaratteriBonus() {
 
}


void Tempo() {     
int tempo = 6000;

while (digitalRead(btnpos1 || botnpos2 || btnpos3 || btnpos4 || btnpos5) == HIGH)
{
tempo = tempo - 300; 
}
