#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPremier(etat);

int main()
{   
    int nb , i;

	printf("Entrer Un Nombre : \n");
	scanf("%d",&nb);

    isPremier();

    return 0;
}

bool isPremier(etat)
{
    int i , nb ;

    if (nb==1 || nb==0)
    {
        etat=false;
    }   

    for (i=2;i<nb;i++)
    {
        if (nb%i==0)
        {
            etat=false;
            break;
        }

        else
        {
            etat=true;
        }
    }
    
    if (etat==true)
    {
        printf("Le Nombre Est Premier\n");
    }
    
    else
    {
        printf("Le Nombre N'est Pas Premier\n");

    }

    return etat;
}