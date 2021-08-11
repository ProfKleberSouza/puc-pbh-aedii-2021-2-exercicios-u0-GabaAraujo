#include <stdio.h>

int main() {

   float a,b,c,d;
   int aprovado=0;

   scanf("%f %f %f %f",&a,&b,&c,&d); //RECEBE OS VALORES

   if(  (double)((a+b+c+d)/4) >= 6 ) //FAZ A MEDIA E CONVERTE PARA DOUBLE-FRACIONADO
   {
      aprovado=1; //FAZ UMA SIMULAÇÃO DE BOOL 
   }
   else{

      aprovado=0;
   }


   if(aprovado == 1)
   {
      printf("NOTA = %.1f (APROVADO)",(double)((a+b+c+d)/4));
   }
   else
   {
      printf("NOTA = %.1f (REPROVADO)",(double)((a+b+c+d)/4));

   }





}