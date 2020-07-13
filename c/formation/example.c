#include <stdio.h>
#include <stdlib.h>
int main()
{
   int smaller=0, greater=0, input_typed=0;
 
    do        
    {
        if (greater<input_typed)  
        greater=input_typed;
        else if (smaller>input_typed)
        smaller=input_typed;
 
        printf("type a number:");
        scanf("%d", &input_typed);
    }
    while(input_typed!=0);
         
        printf("greater nuber is: %d smaller is: %d\n", greater, smaller);
        return 0;
 
 
}
