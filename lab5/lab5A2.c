/***************************************
* EECS2031 – Lab 5 *
* Author: Pu, William *
* Email: william scottpu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>

void swapIncre(int *, int *, int *);
void swap(int *, int *);
int main( ) {
  int a, b,c; 

  /* Input three integers*/
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);     
     swapIncre(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);  

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swap(int *x, int *z){
   int temp = *x;
   *x = *z;
   *z = temp;

}

void swapIncre(int *x, int *y, int *z){
   *y *= 2;
   swap(x, z);
}

