//#include "cs50.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // TODO
   /* int F  //get_int();
    int D = get_int(); */
    int F, D;
    scanf("%d\n",&F);
    scanf("%d\n",&D); 	
    int *E;
    bool flag = false;
    E = malloc(D * sizeof(int));
    for(int i = 0; i < D - 1; i++)
        {
        scanf("%d\n",&E[i]);
        }
        for(int i = 0; i < D; i++)
        {
        if(F < E[i])
	{
           printf("%d",i);
	   return 1;
	}
	else
	{
	   flag = true;
	}
	
        F = F - E[i];
    }
    if(flag)
      printf("Happy Cat!.");
        
}

