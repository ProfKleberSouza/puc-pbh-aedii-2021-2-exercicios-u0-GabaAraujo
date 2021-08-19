/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100

typedef struct Aluno
{
    char nome[100];
    float nota;
    
    
}Aluno;




int main() {
    
    
    Aluno aluno[MAX]; //variavel da struck aluno
    int n;
    float media = 0;
        
    scanf("%d",&n); //recebe o valor repetido
    
    
    for(int i=0;i<n;i++)
    {
        scanf("%s %f",&aluno[i].nome,&aluno[i].nota);
        
    }
    
  
    for(int i=0;i<n;i++)
    {
        media = media +aluno[i].nota;
        
        
    }



    Aluno auxiliar;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(aluno[i].nota > aluno[j].nota)  //decrescente 
            {


              //if(strcmp(aluno[i].nome,aluno[j].nome) < 0) // 0 = nomes iguais //  < 0 = aluno[i].nome vem antes que aluno[j] // >0 segundo menor que o primeiro
              // {
                auxiliar = aluno[i];
                aluno[i] = aluno[j];
                aluno[j] = auxiliar;
            //   }




                /*
                 aux = aluno[j].nota;
                 strcpy(aux_string,aluno[j].nome);

                 aluno[j].nota = aluno[i].nota;
                 strcpy(aluno[j].nome,aluno[i].nome);

                 aluno[i].nota = aux;
                 strcpy(aluno[j].nome,aux_string);

                */

            }

        }


    }
        
      //  for(int i=0;i<n;i++)
     //   {
     //        printf("%s %.1f", aluno[i].nome,aluno[i].nota); //1maior
     //   }

      
 

    for(int i=0;i<3;i++) //compara os 3 maiores em ordem alfabetica
    {
        for(int j=0;j<3;j++)
        {

          
              if(strcmp(aluno[i].nome,aluno[j].nome) < 0) // 0 = nomes iguais //  < 0 = aluno[i].nome vem antes que aluno[j] // >0 segundo menor que o primeiro
               {
                auxiliar = aluno[j];
                aluno[j] = aluno[i];
                aluno[i] = auxiliar;
               }

                    //1 em ordem alfabetica das 3 maiores notas 

        }


    }



    printf("NOTA MEDIA = %.1f", media/n);
    printf("\n");
    printf("%s %.1f", aluno[0].nome,aluno[0].nota); //1maior
     printf("\n");
    printf("%s %.1f", aluno[1].nome,aluno[1].nota); //2maior
     printf("\n");
    printf("%s %.1f", aluno[2].nome,aluno[2].nota); //3maior
     printf("\n");
  
    


}

