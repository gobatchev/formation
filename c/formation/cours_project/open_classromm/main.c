#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    const int MAX = 100, MIN = 1;
    int nombreUser;
    int nombreMystere;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;


    //scanf("%d", &nombreUser);

    while(nombreUser!=nombreMystere )
    {
        printf("type a number :");
        scanf("%d", &nombreUser);

        if(nombreUser<nombreMystere)
        {
            printf("it is greater\n");
        }
        else if(nombreUser>nombreMystere)
        {
            printf("it is smaller\n");
        }


    }

    printf("You won \nEnd of the game");
}
