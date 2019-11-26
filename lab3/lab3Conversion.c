/***************************************
* EECS2031 – Lab3 *
* Author: Pu, William *
* Email: willu@my.yorku.ca *
* eecs_username: willu *
* york_num: 215057060 *
****************************************/
#include <stdio.h>


/*the integer in this function is converted to float when in operation with another float and so the output is float as well*/
float fun_IF(int i, char c, float f);

/*both inputs are float and so, when an integer is put into the first field f1, it is converted to float, then output is float as well*/
float fun_FF(float f1, char c, float f2);


/*both inputs are of integer type and so any operation is done with 2 integers, then the result is output as a float vlaue*/
float fun_II(int i1, char c, int i2);


int main(){
	int i = 1;
	char op;
	float f = 0;
	printf("Enter operand_1 operator operand_2 separated by blanks>");
	scanf("%d %c %f", &i, &op, &f);

	while(i != -1 && f != -1){
		printf("Your input '%d %c %f' results in %f (fun_IF) and %f (fun_II) and %f (fun_FF)\n\n",i,op,f, fun_IF(i,op,f),fun_II(i,op,f),fun_FF(i,op,f));
		printf("Enter operand_1 operator operand_2 separated by blanks>");
		scanf("%d %c %f", &i, &op, &f);

	}	
	return 0;

}

float fun_IF(int i, char c, float f){
	if(c == '+'){
		return i + f;
	}
	else if(c == '-'){
		return i - f;
	}
	else if(c == '*'){
		return i * f;
	}
	else if(c== '/'){
		return i / f;
	}
	return 0;
}

float fun_FF(float f1, char c, float f2){
	if(c == '+'){
		return f1 + f2;
	}
	else if(c == '-'){
		return f1 - f2;
	}
	else if(c == '*'){
		return f1 * f2;
	}
	else if(c== '/'){
		return f1 / f2;
	}
}

float fun_II(int i1, char c, int i2){
	if(c == '+'){
		return i1 + i2;
	}
	else if(c == '-'){
		return i1 - i2;
	}
	else if(c == '*'){
		return i1 * i2;
	}
	else if(c== '/'){
		return i1 / i2;
	}
}

