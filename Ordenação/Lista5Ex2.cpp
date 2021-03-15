#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8],b[8],i, j,x, pesq, acha=0, k=0;
	printf("Entre com os valores do vetor:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d", &a[i]);
		b[i]=a[i]*5;
	}
	for(i=0;i<=7;i++)
		for(j=i+1; j<=7; j++)
		{
			if(b[i] > b[j])
			{
				x=b[i];
				b[i]=b[j];
				b[j]=x;
			}
		}	
			printf("Os valores de B multiplicados e em ordem crescente sao:\n");
			for(i=0;i<8;i++)
			{
				printf("%d\n", b[i]);
			}
				printf("Entre com o valor a ser pesquisado:\n");
				scanf("%d", &pesq);
				while(k<8)
				{
					if(pesq==b[k]&&acha==0)
					{
						acha=1;
						printf("Achou %d:", pesq);
						printf("Na posicao %d:", k);
					}
					else 
					k++;
				}
					getch();
					return 0;	
}
		
	
