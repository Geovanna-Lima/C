#include<stdio.h>
#include<conio.h>

int i, j, x;
int matrizA(int a[12])
{
	for(i=1; i<=11; i++)
			for(j=i+1; j<=12; j++)
			{
				if(a[i] > a[j])
				{
					x = a[i];
					a[i] = a[j];
					a[j] = x;
				}
			}
			printf("Os valores de A em ordem crescente sao:\n");
				for(i=1; i<=12; i++)
					{
						printf("%d\n", a[i]);
					}
					return 0;
}
int matrizB(int b[12])
{
	for(i=1; i<=11; i++)
			for(j=i+1; j<=12; j++)
			{
				if(b[i] > b[j])
				{
					x = b[i];
					b[i] = b[j];
					b[j] = x;
				}
			}
			printf("Os valores de B em ordem crescente sao:\n");
				for(i=1; i<=12; i++)
					{
						printf("%d\n", b[i]);
					}
					return 0;
}
int matrizC(int a[12], int b[12], int c[24])
{
	for(i=1; i<=12; i++)
	{
			c[i] = a[i] + b[i];
	} 
	for(i=1; i<=11; i++)
		for(j=i+1; j<=12; j++)
		{
			if(c[i] > a[i]+ b[i])
			{
				x = c[i];
				c[i] = a[i];
				a[i] = x;
			}
		}
		printf("Os valores de C em ordem crescentes sao:\n");
		for(i=1; i<=12; i++)
		{
			printf("%d\n", c[i]);
		}	
}

int main()
{
	int a[12];
	printf("Entre com os valores de A:\n");
		for(i=1; i<=12; i++)
		{
			scanf("%d", &a[i]);
		}
	matrizA(a);
	int b[12];
		printf("Entre com os valores de B:\n");
		for(i=1; i<=12; i++)
		{
			scanf("%d", &b[i]);
		}
	matrizB(b);
	int c[24];
	matrizC(a,b,c);

	getch();
	return 0;	
}
