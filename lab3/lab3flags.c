/***************************************
* EECS2031 � Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>

#define SIZE 16
void printBinary(short int);

/*counting digits*/

int main () {
  int c, i,index;
  short flags = 0;
  printf("flags: ");printBinary(flags); printf("\n\n");

  while ((c = getchar()) != EOF){
   if (c >= '0' && c <= '9'){  // if a digit with numerical value x, turn bit x of flags on
	flags |= (1<<(c - '0'));
   } 
  
  }
  printf("\nflags: "); printBinary(flags); printf("\n");
  // output  method 1
  for(i=0; i<=9; i++)  {
    int check = flags & (1 << i);   // is bit i is on? 0 or 1
    if ( check )  // check == 1
      printf("%d: %s\n", i, "yes");
    else printf("%d: %s\n", i, "no");
  } 

  // output2  method 2
  printf("------------------\n");
  for(i=0; i<=9; i++)  {
    if ( (flags >> i) & 1)  // if bit i is on
       printf("%d: yes\n", i);
    else printf("%d: no\n", i);
  }

 return 1;  
  

 }

void printBinary(short int n ){
   //printf("binary: ");
   int cou = SIZE-1;
   int k[SIZE]={0};

   while (n) {
      if (n & 1)
         k[cou]=1; //printf("1");
      else
         k[cou]=0; //printf("0");

      n >>= 1; 
      cou--;
   }
   int i=0;
   for(; i< SIZE;i++)
   {
      printf("%d", k[i]);
      if ((i+1)%8==0)
      {
         printf(" ");
      }
   }
}