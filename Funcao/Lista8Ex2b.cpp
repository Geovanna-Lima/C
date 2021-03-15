#include<stdio.h>
#include<conio.h>
#include<locale.h>

int i, a[30], b[30], c[60];
int matrizA()
{
    for(i=0; i<30; i++)
    scanf("%d", &a[i]);
    return 0;
}
int matrizB()
{
	 for(i=0; i<30; i++)
    scanf("%d", &b[i]);
    return 0;
}
int matrizjuncao(int a[30], int b[30], int c[60])
{
	for (i=0;i<60;i++)
    {
        if (i <= 29)
        {
           c[i]=a[i];
        }
        else
        {
            c[i]=b[i-30];
        }
	}
}
int matrizC()
{
	matrizjuncao(a,b,c);
	printf("O valor de C eh:\n");
    for(i=0;i<60;i++)
    printf("%d\n", c[i]);
	return 0;
}
    int main()
    {
        setlocale(LC_ALL,"Portuguese");
        int a[30],b[30],c[60];
        printf("Entre com o valor do vetor A:\n");
        matrizA();
        printf("Entre com o valor do vetor B:\n");
        matrizB();
        matrizjuncao(a,b,c);
        matrizC();
    getch();
	return 0;	
    }
