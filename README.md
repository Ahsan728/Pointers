**Pointer Arithmatic**

```c
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
```

**Same Address Change Value**
```c
int main ()

{
int a;
int *p;
int a; int *p;
a=10;
p= &a; //&a address of a

    printf("%d\n",p);
    printf("%d\n",*p);// *p ...value of address pointed by p
    printf("%d\n",&a);
printf("Address of P is %d\n",p);
printf("Value of P is %d\n",*p);
int b=20;
*p= b;//will the address in p change to point b
printf("Address of P is %d\n",p);
printf("Value of P is %d\n",*p);
}
```

## Pointer Types, Void Pointer, Pointer Arithmatic

int* --> int 
char* --> char
Why strong types? Why not some generic types?

We do not use pointer variables only to store memory addresses, but we also use them to derefrence these addresses so that we can access and modify the values of these addressed.

