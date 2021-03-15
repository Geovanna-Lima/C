#include<stdio.h>
#include<conio.h>

int main()
{
	int a[40], b[40], i, j, x, k=1, acha=0, pesq;
	for(i=0; i <40; i++)
	{	
		printf("Entre com sua nota:\n");
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	//Fazendo A//
		for(i=0; i<39; i++)
			for(j=i+1; j<40; j++)
			{
				if(b[i] > b[j])
				{
					x = b[i];
					b[i] = b[j];
					b[j] = x;
				}
			}
			//Colocando em ordem crescente//
				printf("A notas do(a) aluno(a) eh:\n");
				for(i=0; i<40; i++)
				{
					printf("%6.2d", b[i]);
				}
					//Pesquisa//
					printf("\nEntre com a nota a ser pesquisada:\n");
					scanf("%d", &pesq);
					while(k<40)
					{
						if(pesq == b[k] && acha==0)
					{
						acha=1;
						printf("Nota %d encontrada na posicao %d:", pesq, k+1);
					}
					else 
					k++;
				}
					getch();
					return 0;
}
