#include<stdio.h>
#include<conio.h>

int main()
{
	float Nota,NotaMultiplicada, Resto, Resultado;
	printf("Digite a Nota do aluno: \n");
	scanf("%f", &Nota);
	NotaMultiplicada=Nota*100;
	Resto=NotaMultiplicada/100;
	if(Resto>=50)
	   Nota=(Nota-(Resto/100))+1;
	else
	   Nota=(Nota-(Resto/100));
	printf("A nota arredondada e: %6.2f", Nota);
	
	getch();
	return 0;
}
