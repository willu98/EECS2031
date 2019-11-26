/***************************************
* EECS2031 – Lab 6 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>
#include <string.h>
#define SIZE 8

void printArr(char *input[], int n);
void printArrP(char **input, int n);
void exchange(char *input[]);

main(){

  char * inputs[SIZE] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};
  char *temp;
  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  printf("sizeof char*: %d, sizeof inputs: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printArr
  printArr(inputs, SIZE);

  // swap pointee of first and second element pointers
  temp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = temp;

  // call exchange() to swap some other 'rows';
  exchange(inputs);

  printf("\n== after swapping ==\n");   printf("===========================\n");

  // display the swapped array by calling printArr()
  printArr(inputs, SIZE);

  printf("\n\n");
  // display the swapped array again by calling printArrP()
  printArrP(inputs, SIZE);
}

void printArr(char *input[], int n){
	int i = 0;
	for(i = 0; i < n; i++){
		printf("\n[%d] -*-> %s", i, input[i]);
	}
}

void exchange(char *input[]){
	char *temp;
  	temp = *(input + 2);
  	input[2] = input[3];
  	input[3] = temp;

  	temp = input[4];
  	input[4] = input[5];
  	input[5] = temp;

}

void printArrP(char **input, int n){
  int i = 0;
  for (i = 0; i < n; i++){
    printf("[%d] -*-> %s\n", i, *(input+i));
  }
}
