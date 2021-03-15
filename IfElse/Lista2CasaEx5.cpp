#include<stdio.h>
#include<conio.h>
#include<iostream>

int main()
{
	system("color 4f");
	float SalBruto, SalLiq,Hrs, Adic;
	printf("Dgite o Salario Bruto: \n");
	scanf("%f", &SalBruto);
	printf("Digite a quantidade de hrs trabalhadas: \n");
	scanf("%f", &Hrs);
	if(Hrs>160){
		Hrs=(Hrs-160);
	    Adic=((SalBruto/160)+(Hrs*0.50));
	    SalBruto=(Adic+SalBruto);}    
	        	if(SalBruto<800.00){
                    SalLiq=SalBruto;
				    printf("O salario liquido e: %6.2f \n", SalLiq);}
					    else{
						    if((SalBruto>=800.00)&&(SalBruto<=1600.00)){
						      SalLiq=SalBruto-(SalBruto*0.13);
						      printf("O salario liquido e: %6.2f", SalLiq);}
							    else{
								    SalLiq=(SalBruto-(SalBruto*0.22));
									printf("O salario liquido e: %6.2f", SalLiq);}}
									
	getch ();
	return 0;						 			
}

