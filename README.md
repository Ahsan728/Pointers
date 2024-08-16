[Reference 1](http://alumni.cs.ucr.edu/%7Epdiloren/C++_Pointers/)


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

## Typecasting of pointer variable wrt pointer type

```c
#include <stdio.h>

int main ()

{
int a=1025; 
int *p;
p= &a; 
//Pointer Arithmatic
printf("Size of integer is %d bytes\n",sizeof(int));

printf("Address= %d, value=%d\n",p,*p);
printf("Address= %d, value=%d\n",p+1,*(p+1));
char *p0;
p0 = (char*)p; //typecasting

printf("Size of char is %d bytes\n",sizeof(char));

printf("Address= %d, value=%d\n",p0,*p0);
printf("Address= %d, value=%d\n",p0+1,*(p0+1));
//1025 = 00000000 00000000 00000100 00000001

}
```

# Void Pointer



# Pointer to Pointer
A pointer to a pointer, often referred to as a double pointer, is a variable that stores the address of another pointer. It's essentially a level of indirection added to the concept of pointers



# Pointer as Function Argument




# Pointers and Arrays



# Arrays as Function Argument





# Character arrays and Pointer



# Pointers and 2D arrays


# Pointers and Multidimentional arrays


# Pointers and Dynamic Memory | Stack vs Heap



# Dynamic Memory Allocation in C | malloc, calloc, realloc free

# Pointers as Function Return in C


# Function Pointers in C


# Function Pointer and Callback



# Memory Leak in C






