/***************************************
* EECS2031 – Lab4 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* York num: 215057060*
****************************************/
#include <stdio.h>

#define MY_PRINT(z)  printf("running average is %.3f\n", z)

double r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        double res = r_avg(input);
        MY_PRINT(res);

        printf("enter number (-1 to quit): ");
        scanf("%d", &input);
    }
	
    return 0;
}

double r_avg(int currentInput)
{
    static double sum = 0.0;
    static int num = 0;
    num++;
    sum += currentInput;
    double resu = sum / num;
    return resu;
     
}