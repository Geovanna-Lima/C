#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4], b[4], c[4][2], i, j;
	printf("Entre com os valores de A:\n");
	for(i=0; i<4; i++)
	{
		scanf("%d", &a[i]);
	}
		printf("Entre com os valores de B:\n");
		for(i=0; i<4; i++)
		{
			scanf("%d", &b[i]);
		}
			for(i=0; i<4; i++)
			{
				c[i][0] = a[i]*2;
				c[i][1] = b[i]-5;
			}
			for(i=0; i<4; i++)
				for(j=0; j<2; j++)
				{
					printf("Os valores de C=[%d][%d] sao: %d\n",i+1, j+1, c[i][j]);
				}
				getch();
				return 0;
}
	
