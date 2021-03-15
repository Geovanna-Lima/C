#include<stdio.h>
#include<conio.h>

int main()
{
    float n1,n2,n3, media;
    printf("Digite as notas obtidas nos tres bimestres: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media=(n1+n2+n3)/3;
    printf("Sua media foi: %f \n", media);
    if (media >=6.0)  
        printf("Aluno aprovado");
    else 
         printf("Aluno reprovado");
         getch();
         return 0;
        }
        
    
        
