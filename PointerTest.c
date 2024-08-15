#include <stdio.h>

int main ()
//This bbbbbbb
{
int a; int *p;
a=10;
p= &a; //&a address of a
printf("Address of P is %d\n",p);
printf("Value of P is %d\n",*p);
int b=20;
*p= b;//will the address in p change to point b
printf("Address of P is %d\n",p);
printf("Value of P is %d\n",*p);
}