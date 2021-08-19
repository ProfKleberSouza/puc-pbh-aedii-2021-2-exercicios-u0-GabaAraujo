#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int a,b,c; 

   scanf("%d %d %d",&a,&b,&c);

   if(a+b < c || b+c < a || c+a < b)
   {
      printf("OS LADOS NAO FORMAM UM TRIANGULO"); //caso não for nenhuma dessas condicoens 
   }
   else if(a == b && b == c) // se ambos forem iguais sera um triangulo equilatero
   {
      printf("TRIANGULO EQUILATERO"); 
   }
   else if(a == b || b == c || c == a) //
   {
      printf("TRIANGULO ISOCELES");
   }
   else
   {
      printf("TRIANGULO ESCALENO"); //caso não for nenhuma das condicoens 
   }

   printf("\n");
 /*
   else if (a != b && b !=c && c != a) //se todos os lados forem diferentes
   {

      printf("TRIANGULO ESCALENO");

   }
   else if((a == b) || (b == c)) //se uma condicao for sadisfeita ele ja e definido
   {
      printf("TRIANGULO ISOCELES");
   }
   else if((a == b) && (b == c)) // ambos tem de ser iguais
   {

      printf("TRIANGULO EQUILATERO");

   }


 */


}