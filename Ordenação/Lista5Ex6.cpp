#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[30], b[30], i, j, x, k=1, pesq, acha=0;
	//Colocando A//
	printf("Entre com os valores de A:\n");
	for(i=1; i<=30; i++)
	{
		scanf("%d", &a[i]);
		b[i] = pow(a[i],3);
	}
	//Fazendo B//
		for(i=1; i<=29; i++)
			for(j=i+1; j<=30; j++)
			{
				if(b[i] > b[j])
				{
					x = b[i];
					b[i] = b[j];
					b[j] = b[i];
				}
			}
				printf("Os valores de B sao:\n");
				for(i=1; i<=30; i++)
				{
					printf("%d\n", b[i]);
				}
				//Pesquisa//
				printf("Entre com o numero que quer pesquisar:\n");
				scanf("%d", &pesq);
				while(k<=30)
				{
					if(pesq==b[k] && acha==0)
					{
						acha=1;
						printf("Achou %d:", pesq);
						printf("\nNa posicao %d:", k);
					}
						else
						k++;		
				}
				
				getch();
				return 0;
		}
