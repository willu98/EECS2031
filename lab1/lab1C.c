/***************************************
* EECS2031 Lab1 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>


float sum(float, float);

int main()
{
	float x; float y;
	printf("Enter two float numbers separated by ##: ");
	scanf("%f##%f", &x, &y);
	float su= sum(x,y);
	printf( "%f and %f = %f\n", x,y, su);

	return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}
