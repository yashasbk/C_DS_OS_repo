#include<stdio.h>

int main()
{
	{
	//Operations on integer
	int num1=20,num2=2;
	printf("Operations on integer datatype\n");
	printf("We are taking num1 as 20 and num2 as 2\n");
	printf("Addition is %d\n",num1+num2);
	printf("Subtraction is %d\n",num1-num2);
	printf("Multiplication is %d\n",num1*num2);
	printf("Division is %d\n",num1/num2);
	printf("Modulus is %d\n\n",num1%num2);
	}
	
	{
	//Operations on float
	float num1=20,num2=2;
	printf("Operations on float datatype\n");
	printf("We are taking num1 as 20 and num2 as 2\n");
	printf("Addition is %f\n",num1+num2);
	printf("Subtraction is %f\n",num1-num2);
	printf("Multiplication is %f\n",num1*num2);
	printf("Division is %f\n\n",num1/num2);
	}	
	
	{
	//Operations on char
	char num1=20,num2=2;
	printf("Operations on char datatype\n");
	printf("We are taking num1 as 20 and num2 as 2\n");
	printf("Addition is %hhd\n",num1+num2);
	printf("Subtraction is %hhd\n",num1-num2);
	printf("Multiplication is %hhd\n",num1*num2);
	printf("Division is %hhd\n",num1/num2);
	printf("Modulus is %hhd\n\n",num1%num2);
	}

	{
	//Operations on double
	float num1=20,num2=2;
	printf("Operations on double datatype\n");
	printf("We are taking num1 as 20 and num2 as 2\n");
	printf("Addition is %lf\n",num1+num2);
	printf("Subtraction is %lf\n",num1-num2);
	printf("Multiplication is %lf\n",num1*num2);
	printf("Division is %g\n\n",num1/num2);
	}	

}