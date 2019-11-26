/***************************************
* EECS2031 Lab2 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>

int isDigit(char c);

int main(){
	int userNum = 0;
	char userChar;
	int sum;
	while(userNum != -10000){

		printf("\nEnter an integer and a character separated by blank>");
		scanf("%d %c",&userNum, &userChar);
		if(isDigit(userChar) == 1){
			sum = userNum + (userChar - '0');
			printf("Character '%c' represents a digit. Sum of %d and %c is %d\n", userChar, userNum, userChar, sum);
		}
		else{
			printf("Character '%c' does not represent a digit\n", userChar);
		}
	}
	return 0;
}


int isDigit(char c){
        if(c >= '0' && c <= '9'){
                return 1;
        }
        return 0;
}

