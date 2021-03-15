#include<stdio.h>
#include<conio.h>

int main ()
{
    int soma=0, cont;
    for(cont=1; cont<=100; cont++)

    {
        soma=soma+cont;
        
    }
    printf("A soma da soma obtido dos cem primeiros numeros inteiros e:\n%d ", soma);
    
    getch();
    return 0;
}
