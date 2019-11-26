/***************************************
* EECS2031 � Lab 5 *
* Author: Pu, William *
* Email: william scottpu@my.yorku.ca *
* eecs_num: willu *
* Yorku #: 215057060
****************************************/
#include <stdio.h>

#define SIZE 10
main(){
  int a; short b; char c; double d;
  int * pInt  = &a;
  short * pShort = &b;
  char * pChar = &c;
  double * pDouble = &d;

  printf("\tchar*(%d)\tshort*(%d)\tint*(%d)\t\tdouble*(%d)\n", sizeof(char), sizeof(short), sizeof(int), sizeof(double));
  printf("p:\t%p\t%p\t%p\t%p\n", pChar, pShort,pInt, pDouble);

  printf("p+1:\t%p\t%p\t%p\t%p\n", pChar+1, pShort+1,pInt+1, pDouble+1);

  printf("p+2:\t%p\t%p\t%p\t%p\n", pChar+2, pShort+2,pInt+2, pDouble+2);

  pInt += 4;  pShort += 4; pChar += 4; pDouble +=4;
  printf("p+=4:\t%p\t%p\t%p\t%p\n", pChar, pShort,pInt, pDouble);

  pInt++; pShort++; pChar ++; pDouble++;
  printf("p++:\t%p\t%p\t%p\t%p\n", pChar, pShort,pInt, pDouble);

  pInt -= 2;  pShort -= 2; pChar -= 2; pDouble -=2;
  printf("p-=2:\t%p\t%p\t%p\t%p\n", pChar, pShort,pInt, pDouble);
  
  printf("\n================================");
  printf("======================\n");
  printf("================================");
  printf("======================\n");

  int arr[] = {0,100,200,300,400,500,600,700,800,900}, x;
  int *ptr = arr;
  printf("arr: %p     ptr:%p\n\n", arr, ptr);

  printf("\t\t&arr[i]\t\tarr+i\t\tptr+i");

  printf("\n================================");
  printf("======================");

  /* Print the addresses of each array element. */
  for (x = 0; x < SIZE; x++)
      printf("\nElement %d:\t%p\t%p\t%p", x, &arr[x], arr+x, ptr+x);

  printf("\n================================");
  printf("======================\n\n");
 
   /* Print the value of each array element. */
  printf("\t\tarr[i]\t\t*(arr+i)\t*(ptr+i)");
  printf("\n================================");
  printf("======================");
  for (x = 0; x < SIZE; x++)
     printf("\nElement %d:\t%d\t\t%d\t\t%d", x, arr[x],-1,-1); // complete the code here

  printf("\n================================");
  printf("======================\n");
  return 0;


}