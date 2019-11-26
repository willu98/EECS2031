/***************************************
* EECS2031 Lab1 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int day,month,year;
   	printf("Enter month, day and year separated by spaces: ");
	scanf("%d %d %d", &month, &day, &year);
	printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", month, day, year, year, month, day, year, month, day);
}
