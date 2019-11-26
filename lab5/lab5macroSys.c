/***************************************
* EECS2031 – Lab 5 *
* Author: Pu, William *
* Email: william scottpu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
#define CUBE(x)  (x) * (x) * (x)


int main(int argc, char *argv[])
{
    int arr[SIZE];
    int i=3; 
    int j = 4;

    int resu = CUBE(i);
    printf("%d -> %d\n", i, resu);

    resu = CUBE(j);
    printf("%d -> %d\n", j, resu);

    resu = CUBE(i+j);
    printf("%d -> %d\n", i+j, resu);

    printf("This is file %s, line %d, run on  %s %s\n",__FILE__, __LINE__,__DATE__, __TIME__);
  
    system("ls -l");

    system("mkdir xxx");
  
    printf("%s", "\n");

    system("mkdir xxx/xxx2");

    system("ls -lR"); 


    return 0;
}