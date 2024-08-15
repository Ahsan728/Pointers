#include <stdio.h>

int main ()
//
{
int a;
int *p;
p= &a; //&a address of a

    printf("%d\n",p);
    printf("%d\n",*p);// *p ...value of address pointed by p
}