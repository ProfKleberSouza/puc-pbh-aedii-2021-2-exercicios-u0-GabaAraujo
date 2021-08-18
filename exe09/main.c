/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 5

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

    float aux = 0;
    char aux_string[100] ;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(aluno[i].nota < aluno[j].nota)
            {
                 aux = aluno[j].nota;
                 strcpy(aux_string,aluno[j].nome);

                 aluno[j].nota = aluno[i].nota;
                 strcpy(aluno[j].nome,aluno[i].nome);

                 aluno[i].nota = aux;
                 strcpy(aluno[j].nome,aux_string);


            }

        }


    }

    
    
    printf("NOTA MEDIA = %.1f", media/n);
    printf("\n");
    printf("%s %.1f", aluno[n-3].nome,aluno[n-3].nota); //3maior
     printf("\n");
    printf("%s %.1f", aluno[n-2].nome,aluno[n-2].nota); //2maior
     printf("\n");
    printf("%s %.1f", aluno[n-1].nome,aluno[n-1].nota); //1maior
     printf("\n");
  



}