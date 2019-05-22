#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);


int btnpos1 = 1;
int btnpos2 = 2;
int btnpos3 = 3;
int btnpos4 = 4;
int btnpos5 = 5;
int btnstart = 6;
char A = "$";
char B = "+";
char C =  "-";
int tempo = 1000;
int vite = 5;
int punteggio = 0;
int jolly = 0;
int penality = 0;
int record = 0;
int posizioneRandom = 0;
int contatempo = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (btnpos1, INPUT);
  pinMode (btnpos2, INPUT);
  pinMode (btnpos3, INPUT);
  pinMode (btnpos4, INPUT);
  pinMode (btnpos5, INPUT);
  lcd.begin (16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (btnstart) == HIGH)
  {
   while(vite>0);
   {
    Random(1000);
    CaratterePigreco(1000,5);
    CarattereBonus();
    CaratterePenality();
   }
  }

void Random(int posizioneRandom) {
int posizoneRandom = random (1, 6);
lcd.setCursor (1, posizoneRandom);
lcd.print ("$"|| "+" || "-");
 
}

void Tempo() {     
if (digitalRead('btnpos1' || 'botnpos2' || 'btnpos3' || 'btnpos4' || 'btnpos5') == HIGH)
{
  tempo --;
  delay (1);
}
}
void CaratterePigreco(int posizioneRandom, int punteggio) {                                                        
if ( posizioneRandom == 1 && posizioneRandom == A)
         {
          if (digitalRead(btnpos1) == HIGH)
           {
             punteggio++;
           } 
          else if (tempo < contatempo)
           {
             vite--;
           }
         }
if ( posizioneRandom == 2 && posizioneRandom == A)
        {
          if (digitalRead(btnpos2) == HIGH)
           {
             punteggio++;
           }
          else if (tempo < contatempo)
           {
             vite--;
           }
        }
if ( posizioneRandom == 3 && posizioneRandom == A)
        {
          if (digitalRead(btnpos3) == HIGH)
           {
             punteggio++;
           }
          else if (tempo < contatempo)
           {
             vite--;
           }
        }
if ( posizioneRandom == 4 && posizioneRandom == A)
        {
          if (digitalRead(btnpos4) == HIGH)
           {
             punteggio++;
           }
          else if (tempo < contatempo)
           {
             vite--;
           }
        }
if ( posizioneRandom == 5 )
        {
          if (digitalRead(btnpos5) == HIGH)
           {
             punteggio++;
           }
          else if (tempo < contatempo)
           {
             vite--;
           }
        }
    }
        

void CarattereBonus() {
 if  ( posizioneRandom == 1 && posizioneRandom == B && digitalRead(btnpos1) == HIGH)
 {
 vite++;
 }   
 if  ( posizioneRandom == 2 && posizioneRandom == B && digitalRead(btnpos2) == HIGH)
 {
 vite++;
 }             
 if  ( posizioneRandom == 3 && posizioneRandom == B && digitalRead(btnpos3) == HIGH)
 {
 vite++;
 }      
 if  ( posizioneRandom == 4 && posizioneRandom == B && digitalRead(btnpos4) == HIGH)
 {
 vite++;
 }      if  ( posizioneRandom == 5 && posizioneRandom == B && digitalRead(btnpos5) == HIGH)
 {
 vite++;
 }      
 lcd.setCursor(0,0);
 lcd.print("Vite:"+ vite);
}
void CaratteriPenality() {
  if  ( posizioneRandom == 1 && posizioneRandom == C && digitalRead(btnpos1) == HIGH)
 {
 vite--;
 }   
 if  ( posizioneRandom == 2 && posizioneRandom == C && digitalRead(btnpos2) == HIGH)
 {
 vite--;
 }             
 if  ( posizioneRandom == 3 && posizioneRandom == C && digitalRead(btnpos3) == HIGH)
 {
 vite--;
 }      
 if  ( posizioneRandom == 4 && posizioneRandom == C && digitalRead(btnpos4) == HIGH)
 {
 vite--;
 }      if  ( posizioneRandom == 5 && posizioneRandom == C && digitalRead(btnpos5) == HIGH)
 {
 vite--;
 }      
}
