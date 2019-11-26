/***************************************
* EECS2031 – Lab 6 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 30
#define COLUMNS 50

void exchange  (char[][50]);
void printArray(char[][50], int n);

int main(int argc, char *argv[])
{
     char inputs[ROWS][COLUMNS];
     int current_row = 0;
     fgets(inputs[current_row], 50, stdin);


     while(strcmp("xxx\n",inputs[current_row]) != 0)        
     {    
	current_row++;
	fgets(inputs[current_row], 50, stdin);
     }
     printf("\n");
     printArray(inputs, current_row);
   
     printf("\n");
     exchange(inputs);
     printArray(inputs, current_row);

     return 0;
}

void exchange  (char inputs[][50]){
	printf("== after swapping ==\n");
	char temp[ROWS];

	strcpy(temp, inputs[0]);
	strcpy(inputs[0], inputs[1]);
	strcpy(inputs[1], temp);

	strcpy(temp, inputs[2]);
	strcpy(inputs[2], inputs[3]);
	strcpy(inputs[3], temp);

	strcpy(temp, inputs[4]);
	strcpy(inputs[4], inputs[5]);
	strcpy(inputs[5], temp);

}

void printArray(char inputs[][50], int n){
	int i = 0;
	for(i = 0; i < n; i++){
		printf("[%d]: %s", i, inputs[i]);
	}
}
