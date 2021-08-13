#include <stdio.h>


int main() {

   int n;
   scanf("%d",&n);
    

   while(n != 0)
   {

       if(n > 0)
       {
           printf("POSITIVO ");
       }
       else if(n < 0)
       {
           printf("NEGATIVO ");
       }

     scanf("%d",&n);

   }



}