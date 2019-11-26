/***************************************
* EECS2031 Lab2 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>

int main(){
	int c = getchar();
	while (c != EOF){
		if(c >= 'a' && c <= 'z'){
			c = (c + ('A' - 'a'));
		}
		putchar(c);
		c = getchar();
	}
	return 0;
}
