#include <stdlib.h>
#include <stdio.h>

int echange();

int main ()
{
    int a,b,c;

	printf("Entrer La Valeur De A : \n");
	scanf("%d",&a);

    printf("Entrer La Valeur De B : \n");
	scanf("%d",&b);

    echange();

    printf("La Valeur De A Est %d \nLa Valeur De B Est %d",b,a);

    return 0;
}

int echange(a,b,c)
{
	c=a;
	a=b;
	b=c;
	
	
}