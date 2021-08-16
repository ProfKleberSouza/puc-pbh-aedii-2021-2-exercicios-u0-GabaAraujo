#include <stdio.h>



int main() {

   int n;
   scanf("%d",&n);
    

   while(n != 0)
   {

       if(n > 0)
       {
           printf("POSITIVO ");
           printf("\n");
       }
       else if(n < 0)
       {
           printf("NEGATIVO ");
           printf("\n");
       }

     scanf("%d",&n);

   }



}