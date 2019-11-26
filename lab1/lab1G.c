/***************************************
* EECS2031 Lab1 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* EECS_username: willu *
* York Student #: 215057060 * 
****************************************/
#include <stdio.h>

/* copy the user input to output */

int main(){

  	int c = getchar();
	int count = 0;
	int lineCount = 0;
  	while( c != EOF )
  	{
    		//putchar(c);
   		// or printf("%c", c);
		if( c!= 10 ){
			count++;
		}
		else if(c == 10){
			lineCount++;
		}
    		c =  getchar();  /* read again */
  	}
	printf("# of chars: %d\n",count);
	printf("# of lines: %d\n",lineCount ); 
  	return 0;

}
