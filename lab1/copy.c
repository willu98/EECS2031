#include <stdio.h>

/* copy the user input to output */

int main(){

  	int c = getchar();
	int count = 0;
  	while( c != EOF )
  	{
    		putchar(c);
   		// or printf("%c", c);
		if( c!= 10 ){
			count++;
		}
    		c =  getchar();  /* read again */
  	}
	printf("# of chars: %d\n",count);
  	return 0;

}
