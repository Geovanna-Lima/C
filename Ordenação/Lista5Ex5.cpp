#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j, x;
	//Colocando A//
	printf("Digite os valores do vetor A:\n");
	for(i=0; i<20; i++)
	{
		scanf("%d", &a[i]);
	}
		for(i=0; i<19; i++)
			for(j=i+1; j<20; j++)
			{
				if(a[i] < a[j])
				{
					x = a[i];
					a[i] = a[j];
					a[j] = x;
				}
			}
			//Colocando B//
			printf("Digite os valores de B:\n");
			for(i=0; i<30; i++)
			{
				scanf("%d", &b[i]);
			}
				for(i=0; i<29; i++)
					for(j=i+1; j<30; j++)
					{
						if(b[i] < b[j])
						{
							x = b[i];
							b[i] = b[j];
							b[j] = x;
							
						}
					}
						//Fazendo C//
						for(i=0; i<20; i++)
						{
							c[i] = a[i];
						}
						
						for(i=20, j = 0; i < 50; i++, j++)
						{
							c[i] = b[j];
						}
							for(i=0;i<49; i++)
								for(j=i+1; j<50; j++)
								{
									if(c[i] < c[j])
								{
									x = c[i];
									c[i] = c[j];
									c[j] = x;
								}								
							}							
								printf("Os valores de C sao:\n");
								for(i=0; i<50; i++)
								{
									printf("%d\n", c[i]);
								}
									getch();
									return 0;
}								

