#include<stdio.h>
#include<conio.h>

int main()
{
	int a[9], b[9], i, j;
		printf("Insira cada digito do RA:\n");
	for(i=0; i<=8; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<=8; i++)
	{
		b[i]=a[i];
	}
		for(i=5, j=8; i<=8; i++, j--)
		{
			b[i]=a[j];
		}
		for(i=0; i<=8; i++)
		{
			printf("O novo RA eh:%d\n", b[i]);
		}
	getch();
	return 0;
}





