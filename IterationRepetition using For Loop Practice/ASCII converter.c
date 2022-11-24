/*This c program is Print ASCII values and their equivalent
characters. ASCII value vary from 0 to 255*/
#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<=255; i++)
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}
