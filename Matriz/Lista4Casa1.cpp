#include<stdio.h>
#include<conio.h>

int main()
{
   int x[9], y[9], i;
    printf("Coloque o valor do RA:\n");
   for(i=1; i<=9; i++)
   {
        scanf("%d", &x[i]);
    }
    
        y[1] = x[1];
        y[2] = x[2];
        y[3] = x[8];
        y[4] = x[7];
        y[5] = x[5];
        y[6] = x[6];
        y[7] = x[3];
        y[8] = x[4];
        y[9] = x[9];
    
    for(i=1; i<=9; i++)
    {
        printf("O seu RA eh:%d\n", y[i]);
    }
    getch();
    return 0;
}


        
     
