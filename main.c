/*
  DATE	     : 12-09-2019
  AUTHOR     : bhargav
  DESCRIPTION: Simple shell program
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *input = malloc(100);
	
	do{
		printf("->");
		scanf("%s", input);
                if (!strcmp(input, "help")) {
           		printf("simple shell\n");
		}
		else {
			printf("invalid command\n");
		}

	}while(strcmp(input, "exit")); 

	return 0;
}
