#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>

int main ()
{ 
    int operacao, a, b, c;
    char opt;
    do{
    printf("Digite 'calculadora' ou 'S' para sair: \n ");
    scanf("%c", &opt);
       if(opt == 's' || opt == 'S')
    {
           printf("Essa calculadora está fechando");
           exit(0);}
    else
    {
        printf("Digite a operacao desejada:\n");
        scanf("%c", &operacao);
        printf("Digite A:\n");
        scanf("%d", &a);
        printf("Digite B:\n");
        scanf("%d", &b);
        switch(operacao){
        case '+': printf("O resultado e:\n", c=a+b);break;
        case '-': printf("O resultado e:\n", c=a-b);break;
        case '*': printf("O resultado e:\n", c=a*b);break;
        case '/': printf("O resultado e:\n", c=a/b);break;
        default: printf("Operacao inválida!");}
        printf("Para sair digite 'S'; \n");
        scanf("%c", &opt);
        if(opt == 's' || opt == 'S')
        {
           printf("Essa calculadora está fechando");
           exit(0);}  
        while(opt != 'S' || opt != 's');
        
         getch ();
         return 0;
}


               
        
        
    
        
        
           
    
 
    
    
    
