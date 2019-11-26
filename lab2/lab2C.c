/***************************************
* EECS2031 Lab2 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

int length(char word[]){
	int i;
	int length = 0;
	for (i = 0; i < sizeof(word); i++){
		if (word[i] != '\0'){
			length++;
		}
		else{
			return length;
		}
	}
	return length;
}

int indexOf(char word[], char c){
	int position = 0;
	int i;
	for(i = 0; i <= length(word); i++){
		if(word[i] == c){
			return position;
		}
		position++;
	}
	return -1;
}

int isQuit(char word[]){
	if(word[0] == 'q' && word[1] == 'u' && word[2] == 'i' && word[3] == 't'){
		return 1;
	}
	return 0;
}


int main(){
	char userString[MAX_LENGTH];
	char userCharacter;
	printf("Enter a word and a character separated by blank: ");
	scanf("%s %c", userString, &userCharacter);

	while(isQuit(userString) == 0){
		printf("Input word is %c%s%c. Contains %d characters. Index of '%c' in it is %d\n", '"', userString, '"',  length(userString),  userCharacter, indexOf(userString, userCharacter));
		printf("Enter a word and a character separated by blank: ");
		scanf("%s %c", userString, &userCharacter);

	}
	return 0;
}
