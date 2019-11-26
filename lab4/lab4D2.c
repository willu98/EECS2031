/***************************************
* EECS2031 � Lab4 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* York num: 215057060*
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     char name[10];

     int current_row = 0;
     int age;
     float wage;
     int counter = 0;

     printf("Enter name age and wage: ");
     fgets(input_table[current_row], COLUMNS, stdin);   // add a /n

     sscanf(input_table[current_row], "%s %d %f", name, &age, &wage);
     current_row++;
     while(strcmp("xxx",name) != 0)        
     {    
	 /*making the name uppercase*/
	for(counter = 0; counter < strlen(name); counter++){
		name[counter] += ('A' - 'a');
	}
	age += 10;
	wage *= 1.5;

	sprintf(input_table[current_row], "%s %d %.2f\n", name, age, wage);
	current_row++;
	 


        // read again using fgets()
	printf("Enter name age and wage: ");
     	fgets(input_table[current_row], COLUMNS, stdin);   // add a /n

     	sscanf(input_table[current_row], "%s %d %f", name, &age, &wage);
     	current_row++;
     }

     printf("\nrecords generated in %s %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */

     for(counter = 0; counter < current_row - 1; counter++){
	printf("%s", input_table[counter]); 	
     }

     return 0;
}