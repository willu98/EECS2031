/***************************************
* EECS2031 – Lab 6 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>
#include <string.h>

int getSum(char *[], int n);
int getSumP(char **, int n);
int main(int argc, char *argv[]){
	int i = 0;
	printf("There are %d arguments (excluding \"%s\")\n", argc - 1, *argv);
	for(i = 1; i < argc - 1; i++){
		printf("%s + ", *(argv + i)); 
	}
	printf("%s\n", *(argv + argc -1));
	printf("= %d\n", getSum(argv, argc));
	printf("= %d\n", getSumP(argv, argc));
}

int getSum(char *input[], int n){
	int i = 0;
	int sum = 0;
	for(i = 1; i < n; i++){
		sum += atoi(*(input + i));
	}
	return sum;
}


int getSumP(char **input, int n){
	int i = 0;
	int sum = 0;
	for(i = 0; i < n; i++){
		sum += atoi(*(input + i));
	}
	return sum;
}
