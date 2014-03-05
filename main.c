/*
+-----------------------------------------------+
|                   developed by                |
|               SevenHacker                     |
|                                               |
|                      winded by                |
|               EclipseSpark                    |
|                                               |
|                   Final MOD by                |
|               TheZero                         |
+-----------------------------------------------+
|            by FrozenBox                       |
|                                   network     |
|                                               |
|            www.frozenbox.tk                   |
+-----------------------------------------------+
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// supporto per Unix - Windowz
#if defined(_WIN32)
   #include <windows.h>
   #define SYSTEM "Windows 32"
   #define wait(x) Sleep(x*1000)
   char* pulisci = "cls";
   char* pausa="PAUSE";
#else
   #define SYSTEM "Linux"
   #include <unistd.h>
   #define wait(x) usleep(x)
   char* pulisci = "clear";
   char* pausa="";
#endif

char* intro_txt="\nBenvenuto nel test del frozenbox network per valutare\nle tue abilita' in ambito informatico, di seguito ti verranno fatte delle\n domande di genere booleano (che accettano come risposta o si o no)\n quindi inserisci 0 per si o qualsiasi altro numero per no ed a fine test\n ti verra' dato un punteggio\n\n";

int c,total;
int intro()
{
   int i;
   printf("%s",SYSTEM);
   for(i=0;i<strlen(intro_txt);i++){
      printf("%c",intro_txt[i]);
      wait(1000);
   }
   return 0;
}

void input(int *c,char* text){
   printf(text);
   while(scanf("%d", c) != 1) {
      printf("Inserisci un'intero non una stringa!\n");
      printf(text);
      /* rimuovo eventuali caratteri rimasti nel buffer fino al newline */
      while(getchar() != '\n');
   }
}

int test()
{
   input(&c,"Conosci l'html? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=4;
   }
   input(&c,"Conosci il CSS? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=5;
   }
   input(&c,"Conosci il JavaScript? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=4;
   }
   input(&c,"Conosci il PHP? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=6;
   }
   input(&c,"Conosci l'AJAX? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il JQuery? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il SEQUEL (SQL)? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=5;
   }
   input(&c,"Conosci la tecnologia rails? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=10;
   }
   input(&c,"Conosci la tecnologia CGI? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=10;
   }
   input(&c,"Conosci il C? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=10;
   }
   input(&c,"Conosci il C++? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=6;
   }
   input(&c,"Conosci l'Objective-C? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Sai programmare su Arduino? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=10;
   }
   input(&c,"Conosci il C#? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=4;
   }
   input(&c,"Conosci il Perl? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il Ruby? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il Python? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il Java? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=6;
   }
   input(&c,"Conosci il Basic? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=4;
   }
   input(&c,"Conosci il VB? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=3;
   }
   input(&c,"Conosci l'Ada? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=5;
   }
   input(&c,"Conosci il Pascal? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=3;
   }
   input(&c,"Conosci il Delphi? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=6;
   }
   input(&c,"Conosci il BrainFuck? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=11;
   }
   input(&c,"Conosci il MSHELL? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=6;
   }
   input(&c,"Conosci i linguaggi SH per terminali UNIX? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=8;
   }
   input(&c,"Conosci il Symbian-C++? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=12;
   }
   input(&c,"Conosci il D? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=9;
   }
   input(&c,"Conosci l'Assembly INTEL? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=16;
   }
   input(&c,"Conosci l'Assembly AT&T ? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=16;
   }
   input(&c,"Conosci il binario? \n");
   if (c == 0)
   {
      printf("\tBRAVO\n\n");
      total+=20;
   }
   
   
   printf("\a\n\n\tHai totalizzato :");
   printf("%d",total);
   printf(" Punti\n\n");
   system(pausa);
   return 0;
}

int main()
{
   system(pulisci);
   printf("loading");
   int i;
   for(i=0; i<5; i++){
      printf(".");
      wait(1000);
   }
   system(pulisci);
   intro();
   test();
   return 0;
}
