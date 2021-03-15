#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
	system("color 5f");
	float A,B,C;
	printf("Digite 3 numeros diferentes: \n");
	scanf("%f %f %f", &A, &B, &C);
	if((A>B)&&(A>C)&&(B>C))
	printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", A,C,B);
	    else{
		    if((A>B)&&(A>C)&&(C>B))
			  printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", A,B,C);
			     else{
			     	if((B>A)&&(B>C)&&(A>C))
			     	   printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", B,C,A);
			     	       else{
							 if((B>A)&&(B>C)&&(C>A))
							    printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", B,A,C);
							       else{
								     if((C>A)&&(C>B)&&(A>B))
								        printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", C,B,A);
								           else{
										     if((C>A)&&(C>B)&&(B>A))
										        printf("O valor maior, o valor menor e o valor meio sao respectivamente: %6.2f %6.2f %6.2f", C,A,B);}}}}}
				 
	getch();
	return 0;
	
}
