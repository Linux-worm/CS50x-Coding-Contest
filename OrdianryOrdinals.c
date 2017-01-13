#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <cs50.h>
int main(int argc, char const *argv[])
{
	int counter = 0;
    char *input = get_string();
    char *token = strtok(input," ");
    char *prefix = "";
    int found = 0  ;
    if(input == NULL)
        {
        printf("There is no box");
        return 1;
       }
        
	while(token != NULL)
	{

		    counter = counter + 1;
			if (strcmp(token,"cat") == 0 )
			{
                found = found + 1;
				if(counter % 10 == 1 && counter <= 200 && (counter != 11) && (counter!= 111))
                {
                    prefix = "st";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    return 0;
                }
                else if(counter % 10 == 2 && counter <= 200 && (counter != 12) && (counter!= 112))
                 {
                    prefix = "nd";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    return 0;
                    
                }
                 else if(counter % 10 == 3 && counter <= 200 && (counter != 13) && (counter!= 113))
                 {
                    prefix = "rd";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                     return 0;
                    
                }
                else if(counter % 100 >= 11 && counter % 100 <= 13)
                {
                    prefix = "th";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                    return 0;
                    
                }
               else if(counter <= 200)
                   {
                   prefix = "th";
                    printf("The cat is the %d%s item in the box",counter,prefix);
                   return 0;
               }
                   
           
			}
       
		token = strtok(NULL, " ");
	}
    if(found == 0)
        {
        printf("No cat yet");
    }
	return 0;
}
