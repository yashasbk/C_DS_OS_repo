#include <stdio.h>
#include "header.h"

int main()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("addition is %d\n",add(a,b));
    printf("subtraction is %d\n",sub(a,b));
    printf("multiplication is %d\n",mul(a,b));
    printf("division is %d\n",div(a,b));
    return 0;
}