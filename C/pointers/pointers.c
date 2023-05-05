#include <stdio.h>

int main()
{
    int num = 20;
    int *ptr = &num;
    printf("printing value using pointer %d\n",*ptr);
    //Change value using pointer
    *ptr = 34;
    printf("Changed value is %d\n",*ptr);

    unsigned int four_byte = 0x11111111;
    printf("Original value is %X\n",four_byte);
    char *byte = (char*)&four_byte;
    *byte = 0xAA;
    byte++;
    byte++;
    *byte = 0xAA;
    printf("Value after changing bytes is %X\n",four_byte);
    //Notice properly always lowest byte will be pointed by a pointer.
}