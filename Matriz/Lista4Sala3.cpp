#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[10], i;
	for(i=0; i<=4; i++)
	{
		printf("Entre com o valor dos vetores:\n");
		scanf("%d %d", &a[i], &b[i]);
	}
		for(i=0; i<5; i++)
		{
        	c[i]=a[i]-b[i];
	 		printf("O valor de C eh:%d\n", c[i]);
		}	
	 getch();
	 return 0;
}
