#include<stdio.h>
#include<conio.h>

int main()
{
	int N, X;
	printf("Digite o valor de N! \n");
	scanf("%d", &N);
	if(N<0){
	   X=(N*(-1));
	   printf("O valor de N e: %d \n", X);}
	else
		printf("O valor de N e: %d \n ", N);
	  
	  getch();
	  return 0;    
}
