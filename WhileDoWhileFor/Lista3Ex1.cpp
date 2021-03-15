#include<stdio.h>
#include<conio.h>

int main ()
{
printf("Os numeros impares de 0 ate 20 sao:\n");

    int a;
    for(a=0; a<=20; a=a+1)
    {
         if(a%2 == 1)
          printf("%i\n" ,a);
    }
    getch();
    return 0;
}
