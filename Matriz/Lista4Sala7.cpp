#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10], b[10], i, j;
	for(i=0; i<=9;i++)
	{
		printf("Entre com os valores dos vetores A:");
		scanf("%d", &a[i]);
	}
	for(i=0, j=9 ; i<=9, j>=0; i++, j--)
	{
		b[j]=a[i];
	}
		printf("....................................\n");
		for(i=0; i<=9;i++)
		{
			printf("Entao os valores dos vetores B sao:%d\n", b[i]);	
		}
	getch ();
	return 0;
}
