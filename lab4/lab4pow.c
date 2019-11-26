/***************************************
* EECS2031 – Lab4 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* York num: 215057060*
****************************************/
#include <stdio.h>
#include <math.h>


double my_pow(double base, double p);

int main(int argc, char *argv[])
{
	
   int base, power;  
   printf("enter base and power: ");
   scanf("%d %d", &base, &power);

   while (base != -100){
        double res = pow(base, power);
        double res2 = my_pow(base, power);
        printf("pow:    %.4f\n", res);
        printf("my_pow: %.4f\n", res2);
        printf("enter base and power: ");
        scanf("%d %d", &base, &power);


    }
	
    return 0;
}

// this function should be RECURSIVE
// should not use any loop here
double my_pow(double base, double p)
{
	if(p < 0) {
		base = 1 / base;
		p *= -1;
	}
	if(p == 0){
		return 1;
	}
	else{
		return base * my_pow(base, p - 1);
	}
}