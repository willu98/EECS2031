/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>

int i;
int sum;
int num;
double ave;

void runningAverage(void)
{
    sum += num;
    ave = (float)sum / i;
}
