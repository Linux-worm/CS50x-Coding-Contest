//#include "cs50.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int F, D;
    scanf("%d\n",&F);
    scanf("%d\n",&D); 	
    int *E;
    E = malloc(D * sizeof(int));
    for(int i = 0; i < D; i++)
        {
        scanf("%d",&E[i]);
        }
        for(int i = 0; i < D; i++)
        {
         F = F - E[i];
         if(F <= 0)
	 {
            printf("%d",i);
	    return 1;
 	 }
         }
    printf("Happy Cat!.");
        
}

