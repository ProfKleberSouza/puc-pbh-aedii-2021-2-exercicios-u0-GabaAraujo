#include <stdio.h>

int main() {

   int Tempo,VelocidadeMedia,RendimentoMedio;

   scanf("%d %d %d", &Tempo, &VelocidadeMedia,&RendimentoMedio);


   printf("R = %d \n", RendimentoMedio);
   printf("V = %d \n", VelocidadeMedia);
   printf("T = %d \n", Tempo);
   printf("D = %d \n", Tempo * VelocidadeMedia); //distancia
   printf("L = %d \n", (Tempo * VelocidadeMedia)/RendimentoMedio); // distancia/rendimento medio













}