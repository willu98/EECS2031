/***************************************
* EECS2031 Lab2 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>

#define SIZE 10

int main(){
	int counter[SIZE] = {0};
	int i = 0;
	int c = getchar();
	while(c != EOF){
		if(c >= '0' && c <= '9'){
			counter[c - '0']++;
		}
		c = getchar();
	}

	for(i = 0; i < SIZE; i++){
		printf("%d: %d\n", i, counter[i]);
	}
	return 0;
}