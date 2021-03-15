#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[20], i, j, x, k=1, pesq, acha=0;
	//Colocando A//
	printf("Entre com os valores de A:\n");
	for(i=1; i<=20; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i] + 2;
	}
		for(i=1; i<=19; i++)
			for(j=i+1; j<=20; j++)
			{
				if(b[i] > b[j])
				{
					x = b[i];
					b[i] = b[j];
					b[j] = x;
				}
			}
			//Achando B//
			printf("Os valores de B sao:\n");
			for(i=1; i<=20; i++)
			{
				printf("%d\n", b[i]);
			}
			//Pesquisa//
			printf("Entre com o valor a ser pesquisado:\n");
			scanf("%d", &pesq);
			while(k<=20)
			{
				if(pesq==b[k] && acha==0)
				{
					acha=1;
					printf("Achou o valor: %d", pesq);
					printf("\nNa posicao: %d.", k);
				}
				else 
				k++;
			}
			
			getch();
			return 0;	
}
