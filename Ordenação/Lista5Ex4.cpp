#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], b[12], c[12], i, j, x;
	//Fazendo A//
	printf("Entre com os valores de A:\n");
	for(i=1; i<=12; i++)
	{
		scanf("%d", &a[i]);
	}
		for(i=1; i<=11; i++)
			for(j=i+1; j<=12; j++)
			{
				if(a[i] > a[j])
				{
					x = a[i];
					a[i] = a[j];
					a[j] = x;
				}
			}
				printf("Os valores de A em ordem crescente sao:\n");
				for(i=1; i<=12; i++)
				{
					printf("%d\n", a[i]);
				}
				//Fazendo B//
				printf("Entre com os valores de B:\n");
				for(i=1; i<=12; i++)
				{
					scanf("%d", &b[i]);
				}
					for(i=1; i<=11; i++)
						for(j=i+1; j<=12; j++)
						{
							if(b[i] > b[j])
							{
								x = b[i];
								b[i] = b[j];
								b[j] = x;
							}
						}
							printf("Os valores de B em ordem crescente sao:\n");
							for(i=1; i<=12; i++)
							{
								printf("%d\n", b[i]);
							}
							//Achando C//
							for(i=1; i<=12; i++)
							{
								c[i] = a[i] + b[i];
							} 
								for(i=1; i<=11; i++)
									for(j=i+1; j<=12; j++)
									{
										if(c[i] > a[i]+ b[i])
										{
										x = c[i];
										c[i] = a[i];
										a[i] = x;
										}
									}
									printf("Os valores de C em ordem crescentes sao:\n");
									for(i=1; i<=12; i++)
									{
										printf("%d\n", c[i]);
									}
				
										getch();
										return 0;
}
