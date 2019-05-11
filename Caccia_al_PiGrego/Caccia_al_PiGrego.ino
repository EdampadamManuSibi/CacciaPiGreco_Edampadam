#include <LiquidCrystal.h>

int btnpos1 = 1;
int btnpos2 = 2;
int btnpos3 = 3;
int btnpos4 = 4;
int bntpos5 = 5;
int vite = 0;
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
lcd.begin (16,2);
                                                                             // Nel gioco, nella seconda riga su 5 posizioni devono apparire a caso il simbolo
                                                                             //Sotto a quelle 5 posizioni ci sarà un pulsante da schiacciare, come il gioco della talpa che viene fuori e 
                                                                             //Devi battere sul pulsante, se le schiaccia avendo 5 vite iniziali va avanti, altrimenti perde una vita.
                                                                            // Il record si calcola con il numero di volte che sei andato avanti senza finire le 5 vite
                                                                            //Inoltre tra quelle 5 posizioni, mettere anche dei caratteri jolly che ti aumentano le vite,
                                                                            //E dei caratteri penality che escono a rondom che però ti fanno perdere le vite
}

void loop() {
  // put your main code here, to run repeatedly:

}

void Random() {
randomNumber = random(1,5);
if ( )
{
  lcd.setCursor
  lcd.print 
}
  
 }
