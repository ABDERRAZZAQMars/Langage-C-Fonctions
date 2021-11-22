#include <stdlib.h>
#include <stdio.h>

int add();

int main()
{
    int a,b;

	printf("Entrer Un Nombre A : \n");
	scanf("%d",&a);
	
	printf("Entrer Un Nombre B : \n");
	scanf("%d",&b);
	
	printf("La Somme Est  %d \n",add(a,b));

    return 0;
}

int add(int a, int b)
{
	int somme;

    somme=a+b;
    
    return somme;	
}