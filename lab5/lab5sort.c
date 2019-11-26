/***************************************
* EECS2031 – Lab 5 *
* Author: Pu, William *
* Email: william scottpu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray (char *);

int main ()
{   
   int result;  char c; int i;  int count = 0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") != 0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      sortArray(arr);
      printf("%s\n", arr);
      fgets(arr,SIZE,stdin);
   }
    
    return 0;
}

void sortArray (char *str){
	int i = 0;
	int j = 0;
	int length = strlen(str) - 1;
	char *smallestChar;

	for(i = 0; i <= length; i++){
		smallestChar = (str + i);
		for(j = i + 1; j <= length; j++){
			if(*(str + j) < *(smallestChar)){
				smallestChar = str + j;
			}
		}
		char temp = *smallestChar;
		*smallestChar = *(str + i);
		*(str + i) = temp;
	}
}
