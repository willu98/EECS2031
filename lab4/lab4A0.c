#include <stdio.h>

#define SIZE 10

extern int x,y; // declare gloal variables, which are defined somewhere else
void func1();  // declare function, which are defined somewhere else


void aFun(void); // declare function, which is defined later in this file

int main(int argc, char *argv[])
{
    printf("%d %d\n", x,y);

    y=10;
    func1();
    printf("%d %d\n", x,y);
  
/*    int k;
    for(k=0; k<SIZE; k++)
       aFun();

    printf("counter: %d\n", counter);  */
    return 0;
}

void aFun(void){
    static int counter;
    int a;
    printf("aFun() called, counter is %d, a is %d\n", counter, a);
    
    counter +=10;

 }
