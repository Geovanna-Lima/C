#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *parq;
    parq=fopen("Lim�o.txt", "a");
    fclose(parq);
    return 0;
}
