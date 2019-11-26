/***********************************
* CSE2031 - Lab 7
* Author: Last name, first name
* Email: Your email address
* cse_num: Your cse number
************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 50
#define MAX_LEN 30

struct integers
{
  int int1;
  int int2;
};

struct node {  // list 'node' struct
   int data;
   struct node *next;
};


void init();
void display();
int len();
int search(int);
int get(int);
void insert(int d );
void insertAfter(int key, int index);
void delete (int d);

struct node * head = NULL;   // global variable, the head of the linkedlist

int main()
{
    int i, key, index;

    struct integers arr[MAX_LEN]; // an array of ten structs

    char buffer[BUFFER_SIZE];
    int int1, int2;
    int count= 0;

    FILE * file;
    file = fopen("data.txt", "r");

    while (fgets(buffer, BUFFER_SIZE, file) != NULL)  
    {
       sscanf(buffer, "%d %d", &int1, &int2);   // tokenize buffer and store into int1 and int2

       arr[count].int1 = int1;
       arr[count].int2 = int2;
       count++;
    }

    fclose(file);

    /* print the array of structures */
    for(i=0; i< count; i++){
        printf("arr[%d]: %d %d\n", i, arr[i].int1, arr[i].int2);
    }
    printf("\n");


    i=0;
    for(; i< count; i++){
        int value;
        // read two ints from arr[i], sum up to variable value
        value =  arr[i].int1 + arr[i].int2;
	insert(value);
	

        //no more coding in main	
        printf("insert %d: (%d)", value, len());
        display();
    }

    int removeList [] = {0,1,2,3,5,6,7,8,9, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=removeList[i]) != -10000){
        delete(key);
        printf("remove %d: (%d)", key, len());
        display();
        i++;
    }

    // insert again
    int addList [] = {7,3,5,6,8,9, 2,0,1, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key=addList[i]) != -10000){ 
        insert(key);
        printf("insert %d: (%d)", key, len()); display();
        i++;
    }

    // insert after
    printf("\n");
    key =-4; index =2; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display();
 
    key =-6; index = 0; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display(); 

    key =-8; index = 6; insertAfter(key,index);
    printf("insert %d after index %d: (%d)\t", key,index,len()); display(); 

    // search
    printf("\n");
    int searchList [] = {5,50,9,19,0,-4, -10000}; // -10000 is the terminating token
    i=0;
    while ( (key = searchList[i++]) != -10000 ){
		 
        printf("search %3d ....  ", key);
        if (search(key))
            printf("found\n");
        else
            printf("not found\n");
    }


    int v = get(0);  printf("\nget(0): %d\n", v);
    v = get(3);  printf("get(3): %d\n", v);
    v = get(6);  printf("get(6): %d\n", v);
    v = get(11);  printf("get(11): %d\n", v);

}

/* Initialize the list. */
void init( )
{
    head = malloc(sizeof(struct node));
}

/* Print the content of the list. */
void display()
{
    struct node *current = head;
    while (current != NULL){
        printf( "%4d", current->data );
        current = current -> next;
    }printf( "\n" );

}

/* return the number of nodes in the linked list */
int len()
{
    struct node *currNode;
    int counter = 0;
    for (currNode = head; currNode != NULL; currNode = currNode -> next){
	counter++;
    }
    return counter;
}

/* return whether a node with key exists in list */
/* assume the list is not empty */
int search (int key)
{
    struct node * curr = head;

    while(curr!=NULL)
    {
        if (curr -> data == key)
        {
            return 1;
        }
        curr = curr -> next;
    }

    return 0;
}

/* return the data value of node at index index
   assume the list is not empty, and index is in [0, len()-1] 
*/
int get(int index)
{
    struct node *curr = head;
    int counter = 0;
    for(counter = 0; counter < index; counter++){
	    	curr = curr -> next;
    }
	
    return curr -> data;
}

/* Insert a new data element with key d into the end of the list. */
/* Hint: You need to consider the special case that the list is empty, 
   and the general case that the list is not empty */
void insert(int d)  //  at the end
{
   if (head == NULL){/* the list is empty */
	init();
        head -> data = d;
	head -> next = NULL;
   }
   else{  // general case, insert at the end.
    struct node * curr = head;
    while(curr -> next != NULL)
    {
        curr = curr -> next;
    }

    curr -> next = malloc(sizeof(struct node));
    curr -> next-> data = d;

    curr -> next-> next = NULL;
 
    }
}
 


/* insert in the middle. 
  insert new node with data d, after the node of index 'index'
  assume the list is not empty, and index is in [0, len()-1] 
 */
void insertAfter(int d, int index )
{
    struct node * curr = head; // a local pointer
    int i;
    /* traverse the list */
    for(i = 0; i<index; i++)
    	curr = curr -> next;
    /* insert after curr */
    struct node * newNodeP = malloc(sizeof(struct node));
    newNodeP -> data = d; // (*newNodeP).data = dat;
    newNodeP -> next = curr -> next; //(*newNodeP).next=(*curr).next;
    curr -> next = newNodeP;
}

/* lab version */
/* Remove the node with value d from the list */
/* assume the list is not empty  */
/* assume the node to be deleted is in the list */
/* assume no duplicated keys in the list */
/* You don't have to free the space */
void delete(int d)
{
   
   /* special case: to be removed is the first, need to change head  */
   if (head -> data == d){
        head = head -> next;  
   }

   else  // general case, remove from the middle or the last
   {
	
        struct node * current = head;
        while ( current -> next-> data != d )
            current  = current  -> next;
        
        current -> next = current->next->next;  /* by pass the node to be deleted */
   }
}