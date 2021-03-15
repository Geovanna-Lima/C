#include<stdio.h>
#include<conio.h>

float conta(float *tempo, float *taxa, float *valor, float *atraso, float *prest)
{
	*prest=*valor+(*valor*(*taxa/100)**tempo);
    printf("O valor da prestacao e:\n%6.2f", *prest);
}

int main()
{
	float tempo, *ptempo, taxa, *ptaxa, valor, *pvalor, atraso, *patraso, prest, *pprest;
	
    printf("Digite o valor da prestacao:\n");
    scanf("%f", &valor);
    printf("Digite o tempo em atraso:\n");
    scanf("%f", &tempo);
    printf("Digite a taxa:\n");
    scanf("%f", &taxa);
    ptempo=&tempo;
    ptaxa=&taxa;
    pvalor=&valor;
    patraso=&atraso;
    pprest=&prest;
    conta(ptempo, ptaxa, pvalor, patraso, pprest);
	getch();
    return 0;
}
