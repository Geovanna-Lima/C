#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8], b[8], i;
	for(i=0; i<=7; i++)
	{
		printf("Digite os valores do vetor:\n");
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=0; i<=7; i++)
	{
		b[i]=a[i]*a[i];
		printf("O valor de A eh:%d\n", a[i]);
		printf("O valor de B eh:%d\n", b[i]);
	}
	getch();
	return 0;
}
