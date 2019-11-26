/***************************************
* EECS2031 – Lab4 *
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
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char wageS[10];

    int age;
    float wage;

    int counter = 0;
    int i = 0;
    int j = 0;
    printf("Enter name age and wage: ");
    scanf("%s %s  %s", name, ageS, wageS); 
       
    while (strcmp("xxx", name) != 0)        
    {  
	sprintf(inputs_table[i], "%s %s %s", name, &ageS, &wageS);
	i++;

	/*making the name uppercase*/
	for(j = 0; j < strlen(name); j++){
		name[j] += ('A' - 'a');
	}

	sscanf(ageS, "%d", &age);
	sscanf(wageS, "%f", &wage);
	age += 10;
	wage *= 1.5;

	sprintf(inputs_table[i], "%s %d %.2f", name, age, wage);
	i++;

	/* read again using scanf(%s %s %s) */ 
	printf("Enter name age and wage: ");
	scanf("%s %s  %s", name, &ageS, &wageS); 
    
    }
    
     printf("\nrecords generated %s %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */      
     for(counter = 0; counter <= i; counter++){
	printf("%s\n", inputs_table[counter]); 	
     }
     return 0;
}
