#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
	system("color 3F");
	float n1,n2,media,exame,NovaMedia;
	printf("Digite a nota da prova do primeiro bimestre: \n");	
	scanf("%f", &n1);
	printf("Digite a nota da prova do segundo bimestre: \n");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	printf("Sua media foi:\n %6.2f \n", media);
	if (media>=6.0)
	    printf("Aluno aprovado!");
	else
	    printf("Aluno de exame! \nDigite a nota de Exame: \n");
	    scanf("%f", &exame);
	    NovaMedia=(media+exame)/2;
	printf("Sua Nova Media foi:\n %6.2f \n", NovaMedia);
	if (NovaMedia>=5.0)
	    printf("Aluno aprovado em exame!");
	else
	     printf("Aluno Reprovado!");
	     getch();
	     return 0;	
	}
	


