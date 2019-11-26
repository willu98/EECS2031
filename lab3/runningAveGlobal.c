/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>
#define MY_PRINT(x,y,z) printf("running average is %d / %d = %.3f\n",x, y, z)

extern void runningAverage();

extern int i;
extern sum;
extern int num;
extern double ave;

int main(){
	i = 1;
	sum = 0;
	printf("\nenter number (-1 to quit): ");
	scanf("%d", &num);

	while(num != -1){		
		runningAverage();
		MY_PRINT(sum, i, ave);		
		i++;
		printf("\nenter number (-1 to quit): ");
		scanf("%d", &num);

	}
}