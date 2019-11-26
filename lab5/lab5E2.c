/***************************************
* EECS2031 – Lab 5 *
* Author: Pu, William *
* Email: william scottpu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
/* Passing an array to a function. */

#include <stdio.h>

#define MAX 20
 

int largest(int * x, int *l);
void display(int *arr, int *l);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }
     *(array + count) = -1;

      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array, &count);

     
     
     printf("\nLargest value: %d\n", largest(array, &count));
     
     return 0;
 }
 
 /* display a int array */

 void display(int *arr, int *l)
 {
	int i = 0;
	for(i = 0; i < *l; i++){
		printf("%d ", *(arr + i));
	}
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr, int *l)
 {
	int i = 0;
	int num = 0;
	for(i = 0; i < *l; i++){
		if(*(arr + i) > num){
			num = *(arr + i);
		}
	}
	return num;
 }
