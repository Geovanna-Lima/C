#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j;
		printf("Entre com o valor dos velores A:\n");
	for(i=0; i<20; i++)
	{
		scanf("%d", &a[i]);
	}	
	printf("Entre com o valor dos velores B:\n");
	for(i=0; i<30; i++)
	{
		scanf("%d", &b[i]);
	}
		for(i=0; i<20; i++)
		{
			c[i]=a[i];
		}
		for (i=0, j=20; i<30, j<50; i++, j++)
		{
			c[j]=b[i];
		}
		for(i=0; i<50; i++)
		{
		printf("Os valores sao:%d\n", c[i]);
		}
		getch ();
		return 0;
}

