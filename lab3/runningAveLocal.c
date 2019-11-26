/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>

#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f\n",x, y, z)

double runningAverage(int currentSum, int inputCount);

int main(){
	int num;
	int sum = 0;
	int i = 1;
	double ave;
	printf("\nenter number (-1 to quit): ");
	scanf("%d", &num);

	while(num != -1){
		sum += num;
		
		ave = runningAverage(sum, i);
		MY_PRINT(sum, i, ave);		
		i++;
		printf("\nenter number (-1 to quit): ");
		scanf("%d", &num);

	}
}

double runningAverage(int currentSum, int inputCount){
	return ((float)currentSum / inputCount);
}