/***************************************
* EECS2031 � Lab4 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* York num: 215057060*
****************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int age = 10;
	int age2 = 100;
	int* ptr;
	int* ptr2;
	
	ptr2 = &age2;
	ptr = &age;
	
	printf("age: %d %d\n", age, *ptr);

	*ptr = 14;
	printf("age: %d %d\n", age, *ptr);

	*ptr2 = *ptr;
	printf("age2: %d %d\n", age2, *ptr2);

	*ptr2 = *ptr;
	printf("ptr2's pointee: %d\n", *ptr2);

	ptr2 = ptr;
	*ptr2 -= 1;
	printf("%d %d %d\n",age, *ptr, *ptr2);

	printf("%p %p %p\n",&age,ptr,ptr2);

       return 0;
}