/***************************************
* EECS2031 – Lab4 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* York num: 215057060*
****************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{
     char input[SIZE2];    
     char name[SIZE]; 

     int age;

     float wage;
     
     char resu[SIZE2], resu2[SIZE2], resu3[SIZE2];
	
     printf("Enter name, age and wage (exit to quit): ");
     fgets(input, SIZE2 , stdin);

     while (strcmp("exit\n",input) != 0)
     {    
	sscanf(input, "%s %d %f", name, &age, &wage);
 	name[0] += ('A' - 'a');
	age += 10;
   	wage *= 2;

	sprintf(resu, "%s-%d-%.3f-[%.0f, %.0f]\n", name, age, wage, floor(wage), ceil(wage));    
    	strcpy(resu2, resu);
	sprintf(resu3, "%s", resu);

	printf("%s%s%s\n", resu, resu2, resu3);

	/* use fgets to read again */
        printf("Enter name, age and wage (exit to quit): ");
        fgets(input, SIZE2 , stdin);
     } 
      return 0;
}