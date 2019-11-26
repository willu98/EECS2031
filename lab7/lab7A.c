/***************************************
* EECS2031 – Lab 7 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_num: willu *
* York #: 215057060
****************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printArr(int *, int);

int  main()
{ 
  char *p;
  int n, i;
  int *my_array;


  printf("Size of array: ");
  scanf("%d", &n);

 
  my_array = (int *)malloc(n * sizeof(int));
  if (my_array == NULL)
  {
    printf("Memory allocation failed! Bye!\n");
    exit(0);
  }
  *my_array = -10;
  for(i = 1; i<n; i++)
    *(my_array + i) = i * 100;

  printArr(my_array, n);
  
  p = malloc(6);
  strcpy(p, "hello");
  printf("%s\n", p);
  *(p+2) = 'X';
  printf("%s\n", p); 

  return 0;
}

void printArr(int * arr, int n){
 int i = 0;
 for(i = 0; i  < n; i++){
	printf("%d\n", arr[i]);	
 }
}
