#include <stdio.h>

int main() {
     int vetor[10];

   for(int i=0;i<10;i++) //vai de 0 a 9
   {
      scanf("%d",&vetor[i]);
   }
    
    printf("\n \n");

   for (int i = 9; i >= 0; i--) //le de 0 a 9
   {
      printf("%d\n",vetor[i]);
   }
   


}