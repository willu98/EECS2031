/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

int length(char word[]){
	int i;
	int length = 0;
	for (i = 0; i < MAX_LENGTH; i++){
		if (word[i] != '\0'){
			length++;
		}
		else{
			return length;
		}
	}
	return length;
}

int main(){

	char userString[MAX_LENGTH];
	char quitS[] = "quit";
	int atoiNum;
	int myAtoiNum;
	int i = 0;
	int power = 1;
	printf("Enter a word of positive number or 'quit': ");
	scanf("%s\n", userString);
	printf("%s\n", userString);

	while(strcmp(quitS, userString) != 0){
		atoiNum = atoi(userString);

	
		for(i = length(userString) - 1; i >= 0; i--){
			myAtoiNum += (userString[i] - 48) * power;
			power *= 10;
		}
		power = 1;

		printf("atoi: %d\t(%#X %#o)\t%d\t%d\n", atoiNum, atoiNum, atoiNum, 2 * atoiNum, atoiNum * atoiNum);
		printf("my atoi: %d\t(%#X %#o)\t%d\t%d\n\n", myAtoiNum, myAtoiNum, myAtoiNum, 2 * myAtoiNum, myAtoiNum* myAtoiNum);
		myAtoiNum = 0;
		printf("Enter a word of positive number or 'quit': ");
		scanf("%s\n", userString);
		printf("%s\n", userString);

	}
	return 0;
}