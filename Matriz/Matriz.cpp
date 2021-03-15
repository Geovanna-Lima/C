#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3], i;
    for (i=0;i<3;++i)
    {
        printf("Entre com o valore do vetor:\n");
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;++i)
    {
        printf("%d", a[i]);
    }
    getch();
    return 0;
}
