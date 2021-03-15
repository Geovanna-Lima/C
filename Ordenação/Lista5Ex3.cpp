#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, j, x;
	printf("Entre com os valores de A para serem colocados em forma crescente e fazer o fatorial:\n");
	for(i=1; i<=15; i++)
	{
		scanf("%d", &a[i]);
    	for(b[i] = a[i]; a[i] > 1; a[i]--)
    	{
        b[i] = b[i] * (a[i]-1); 
   		}
   	}
		for(i=1; i<=15; i++)	
			for(j=i+1; j<=14; j++)
			{
				if(b[i] > b[j])
				{
				x=b[i];
				b[i]=b[j];
				b[j]=x;
				}
			}
				printf("Os valores de B em ordem crescente e com seus fatoriais sao:\n");
				for(i=1; i<=15; i++)
				{
					printf("%d\n", b[i]);
				}	
				getch();
				return 0;
}
				
