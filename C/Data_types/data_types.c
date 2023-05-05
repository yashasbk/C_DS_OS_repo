#include <stdio.h>

int main()
{
	//Integer
	int num = -40;
	unsigned int num1 = 30;
	printf("signed integer is %d and unsigned integer is %d\n",num,num1);
	
	short num2 = 10;
	unsigned short num3 = 20;
	printf("signed short is %hd and unsigned short is %hd\n",num2,num3);

	long num4 = 50;
	unsigned long num5 = 60;
	long long num6 = 900;
	printf("signed long is %ld unsigned long %ld signed long long %lld\n",num4,num5,num6);

	//Character
	char val = 'A';
	unsigned char val2 = 255;
	printf("char %c unsigned char %d \n",val,val2);
    printf("Ascii value of 'A' is %d\n",val);

	//Floating point single precision
	float decimal = 34.33;
	printf("floating point %f\n",decimal);
	
	//Floating point double precision
	double decimal2 = 34.33;
	long double decimal3 = 23.33;
	printf("double precision is %lf\n",decimal2);
	printf("long double is %Lf\n",decimal3);
}