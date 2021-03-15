#include<stdio.h>
#include<conio.h>

int main ()
{
    int cont;
    for(cont=1; cont<200; cont++)
    {
        if(cont%4==0)
        {
            printf("%d\n", cont);
        }
    }
    getch();
    return 0;
}
