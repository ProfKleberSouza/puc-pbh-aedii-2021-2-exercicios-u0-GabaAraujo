#include <stdio.h>

int main() {
   
   int a,b,c; 

   scanf("%d %d %d",&a,&b,&c);

  
   if((a == b) && (b == c))
   {

      printf("TRIANGULO EQUILATERO");

   }
   else if (a != b && b !=c && c != a)
   {

      printf("TRIANGULO ESCALENO");

   }
   else if((a == b) || (b == c))
   {
      printf("TRIANGULO ISOCELES");
   }
   else
   {
      printf("OS LADOS NAO FORMAM UM TRIANGULO");
   }
   





}