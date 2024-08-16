#include <stdio.h>

int main ()
//This bbbbbbb
{
int a; int *p;
a=10;
p= &a; 
//Pointer Arithmatic
printf("Address P is %d\n",p);
printf("Value at Address P is %d\n",*p);
printf("Size of integer is %d bytes\n",sizeof(int));
printf("Address p+1 is %d\n",p+1);
printf("Value at Address P+1 is %d\n",*(p+1));

}