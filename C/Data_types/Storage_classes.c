#include <stdio.h>
//Functions are always extern. We can make them static if we want to restrict it's visibility.
extern int num2; //This is a variable declaration and it has file scope
int main()
{
	{
		int num= 20;  //This variable is having block scope and is stored in stack 
		printf("auto int num is %d\n",num);
	}
	static int num; //This variable is accessible only inside this block and is stored in uninitialized data segment
	register int num1; //This variable has block scope and is stored in cpu registers if available otherwise stack
    //We can't access address of register variable.
	printf("static int num is %d\n",num);
	printf("register int num1 is %d\n",num1);
	printf("extern int num2 is %d\n",num2);
}
int num2 = 30;  //This variable has file scope and stored in intitialized data segment