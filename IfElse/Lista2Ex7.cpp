#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,n3,n4;
	printf("Digite 4 numeros inteiros: \n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	if((n1%4==0)||(n1%5==0))
	  printf("Numero divisivel por 4 ou 5! %d\n", n1);
	if((n2%4==0)||(n2%5==0))
	   printf("Numero divisivel por 4 ou 5! %d\n", n2); 
	if((n3%4==0)||(n3%5==0))
	   printf("Numero divisivel por 4 ou 5! %d\n ", n3);
	if((n4%4==0)||(n4%5==0))
	   printf("Numero divisivel por 4 ou 5! %d\n", n4);
	else
	   printf("Nao foi digitado um numero divisivel por 4 ou 5!");
	   
	getch();
	return 0;         
}

