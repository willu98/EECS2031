#include <stdio.h>
#include <stdlib.h>

struct ints
{ 
   int int1;
   int int2;
};

struct intPtr { 
   int data;
   int * ptr;
};


struct intArr { 
   int data;
   int arr[3];
};


int getSum(struct ints);
void processStruct (struct ints *);

main()
{
  printf("----------- simple struct --------------\n");
  struct ints a = {32,4};
  struct ints b;
  // print the two members of a;
  printf("a: %d %d\n", a.int1, a.int2);
  //print the two members of b;
  printf("b: %d %d\n", b.int1, b.int2);

  a.int1 = 100;
  b = a;
  // print the two members of a;
  printf("a: %d %d\n", a.int1, a.int2);
  //print the two members of b;
  printf("b: %d %d\n", b.int1, b.int2);
  
  b.int1 = 700; // change b.int1
  //use scanf to change b.int2
  printf("Enter value for b.int2: ");
  scanf("%d", &b.int2);

  // print the two members of a;
  printf("a: %d %d\n", a.int1, a.int2);
  //print the two members of b;
  printf("b: %d %d\n", b.int1, b.int2);
  

  printf("------- struct with pointer member -----------------\n");
  struct intPtr xx; 
  xx.data = 5;
  int c = 100;   xx.ptr = &c;
  
  struct intPtr yy = xx;
  // print xx's data, pointer value, and pointee value  
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *xx.ptr);

  //print yy's data, pointer value, and pointee value    
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *yy.ptr);

  // set the pointee of yy's pointer to be 10000;  
  *yy.ptr = 10000;
  printf("c: %d\n", c);  
  // print xx's data, pointer value, and pointee value  
  printf("xx: %d %p %d\n", xx.data, xx.ptr, *xx.ptr);

  //print yy's data, pointer value, and pointee value    
  printf("yy: %d %p %d\n", yy.data, yy.ptr, *yy.ptr);

  printf("------- struct with array member ------------------\n");

  struct intArr tt = {2, {100,200}};
  
  // set tt's arr member's 2nd element to be 400;  
  
  //print tt's data element, as well as array elements  
  printf("%d [%d %d]", tt.data, tt.arr[0], tt.arr[1]);

  printf("-------- struct and function -----------------\n");
  printf("elements sum of a: %d\n", getSum(a));  
  //print a's memebers
  printf("struct a before processing: %d %d\n", a.int1, a.int2);
  processStruct(&a);
  //print a's memebers again
  printf("struct a after  processing: %d %d\n", a.int1, a.int2);

  /****array of structures ******************************  */
  printf("--------- array of structs----------------\n");
  struct ints structArr[3] = {{1,2}, {3,4}};
  // set the 3rd element structures's int1 and int2 to be 5 and 6
  structArr[2].int1 = 5;
  structArr[2].int2 = 6;
  int i;
  for (i=0; i<3 ;i++ )
  {
    // print each element structures  
    printf("int1 : %d", structArr[i].int1);
    printf("int2 : %d", structArr[i].int2);

  } 

}   

int getSum(struct ints s){
  return s.int1 + s.int2;
}

/*  this function intends to modify the member values of the argument 
structure x, which is of type struc ints  */
void processStruct(struct ints *x){

  x -> int1 ++;
  x -> int2 +=100;
}

 