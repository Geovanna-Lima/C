#include<stdio.h>
#include<conio.h>


int main ()
{
	int a;
	int b;
	printf("Insira um valor para ser multiplicado! \n");
	scanf("%d", &b);
	a=0;
    do{
        printf("%d * %d = %d\n", a, b, (b * a));
        a=a+1;
    }
    while(a<=10);
  	getch ();
	return 0;
}
