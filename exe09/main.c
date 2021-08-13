/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
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
    
    
    printf("NOTA MEDIA = %f", media/n);



}