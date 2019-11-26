/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>
#include <string.h>

int isLeap(int year);

int main(){
	int userNum = 0;
	printf("Enter a year: ");
	scanf("%d", &userNum);

	while(userNum >= 0){
		if(isLeap(userNum) == 1){
			printf("year %d is a leap year\n\n", userNum);
		}
		else{
			printf("year %d is not a leap year\n\n", userNum);
		}
		printf("Enter a year: ");
		scanf("%d", &userNum);

	}
	return 0;
}

int isLeap(int year){
	if(year % 400 == 0){
		return 1;
	}
	else if ((year % 4 == 0) && (year % 100 != 0)){
		return 1;
	}
	return 0;
}
