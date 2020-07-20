#include <stdio.h>
#include <stdlib.h>

int somme_tableTableau(int tableau[], int tailleTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4]={1,2,3,4};
    int toto = 0;
    toto = somme_tableTableau(tableau,4);
    printf("La somme_table est %d\n", toto);
    return 0;
}
 
int somme_tableTableau(int tableau[], int tailleTableau)
{
    int somme_table =0, i=0;
    for (i=0; i<tailleTableau; i++)
    {
        somme_table += tableau[i];
    }
 
    return somme_table;
}
