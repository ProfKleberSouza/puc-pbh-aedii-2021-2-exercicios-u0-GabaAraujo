#include <stdio.h>

int main() {
   
   int a,b,c;

   int maior=0,menor = 0;

   scanf("%d %d %d",&a,&b,&c);

   maior = a;
   menor = a;

   
   if(maior<b)
   {
      maior = b;
   }

   if(maior<c) //b < c
   {
      maior=c;
   }


   if(menor>b)
   {
      menor = b;
   }

   if(menor>c)
   {
      menor=c;
   }

   printf("MAIOR = %d ",maior);
   printf("\n");
   printf("MENOR = %d ",menor);
   printf("\n");





}