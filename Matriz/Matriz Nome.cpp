#include<stdio.h>
#include<conio.h>


int main()
{
    int i;
    char nome[5];
    for (i=0; i<=4; i++)
    {
        printf("Entre com os nomes:\n");
        scanf("%c", &nome[i]);
        fflush(stdin);
        
    }
    for (i=0; i<=4; i++)
    {
        printf("%c", nome[i]);
        if(i != 4)
             printf(", ");
        else 
            printf(".");
        
    }
    getch ();
    return 0;
}
    
