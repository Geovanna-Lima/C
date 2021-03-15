#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B, Diferenca;
	printf("Digite dois numeros: \n");
	scanf("%d", &A);
	scanf("%d", &B);
	if(A==B)
	   printf("Os valores sao iguais, nao existe diferenca!");
	else{
	    if(A>B)
	   Diferenca=A-B;
	   else 
	   Diferenca=B-A; 
	   printf("A diferenca entre os numeros escolhidos e: %d \n", Diferenca);
  }
	   getch();
	   return 0;	   
	    
}
