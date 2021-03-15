#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7], b[7], c[7][2], i, j;
	//Colocando A//
	printf("Entre com os valores da matriz A:\n");
	for(i=1; i<=7; i++)
	{
		scanf("%d", &a[i]);
	}
		//Colocando B//
		printf("Entre com os valores da matriz B:\n");
		for(i=1; i<=7; i++)
		{
			scanf("%d", &b[i]);
		}
			//Fazendo C//
		for(i = 1; i <= 7; i++) 
		{
			c[i][1] = a[i];
			c[i][2] = b[i];
		}
		for(i=1; i<=7; i++)
			for(j=1; j<=2; j++)
			{
				printf("Os valores de C=[%d][%d] sao: %d\n",i, j, c[i][j]);
			}
				getch();
				return 0;
}
