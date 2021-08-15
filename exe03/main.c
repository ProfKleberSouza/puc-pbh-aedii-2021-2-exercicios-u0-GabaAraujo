#include <stdio.h>

int main() {
   
int Numero;


scanf("%d", &Numero); //input numero


printf("NUMERO ");


if(Numero % 2 == 0)
{
   printf("PAR ");

}
else
{
   printf("IMPAR ");
}


if(Numero > 0)
{
   printf("POSITIVO");
}
else if(Numero < 0)
{
   printf("NEGATIVO");
}
else
{
   printf("NEUTRO");
}

 printf("\n");

}