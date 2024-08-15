#include <stdio.h>

int main ()
//This bbbbbbb
{
int a;
int *p;
a=10;
p= &a; //&a address of a

    printf("%d\n",p);
    printf("%d\n",*p);// *p ...value of address pointed by p
    printf("%d\n",&a);
}