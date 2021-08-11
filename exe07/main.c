#include <stdio.h>

void contabiliza_vetor(int n)
{

   int vetor[n]; //vetor com n numeros

   int maior,menor;

 
   for(int i=0;i<n;i++)
   {
      scanf("%d",&vetor[i]); //alimenta o vetor com n posicoens

   }

   maior = 0; //maior valor
   menor = vetor[0]; //primeiro valor
   


   for(int i=0;i<n;i++)
   {

         if(maior < vetor[i]) //se o 1numero for maior que o valor maior -> ele sera substituido
            {
               maior = vetor[i];
            }         

         if(menor > vetor[i]) //se o vetor for menor que o valor menor ->  ele sera substituido
         {  
            //menor = 1valor // menor(1valor) = segundo e assim por diante
               menor = vetor[i];

         }

   }


   printf("MENOR = %d",menor);
   printf("\n");
   printf("MAIOR = %d",maior);



}







int main() {
 
  int n;

   scanf("%d",&n);


  contabiliza_vetor(n);




}