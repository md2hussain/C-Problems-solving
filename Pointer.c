/*#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = *(&a);  // Assigns the value of a, not the address of a
    printf("p = %d\n", p);  // Prints value, not address
    printf("a = %d\n", a);  // Prints a's value

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char name[]="Hussain";
    printf("Name : %s\n",name);
    printf("Address of First letter %p\n",&name[0]);
    printf("Address of Name %p\n",&name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("Address of %c is %p\n",name[i],&name[i]);
    }
}*/
/*#include <stdio.h>

int main() {
    // Declare an array of characters (string)
    char array[] = "Hello";
    
    // Declare a pointer to a string literal
    char *pointer = "World";
    
    // Print the array and the pointer
    printf("Array as a string: %s\n", array);
    printf("Pointer as a string: %p\n", *pointer);
    
    // Print the memory addresses
   // printf("Address of array: %p\n", array);
    //printf("Address of pointer: %p\n", pointer);
    
    // Trying to modify the array (this is valid)
    //array[0] = 'h';
    //printf("Modified array: %s\n", array);
    
    // Trying to modify the pointer's string (this will likely cause an error)
    // pointer[0] = 'w';  // Uncommenting this line may cause a segmentation fault
    // printf("Modified pointer: %s\n", pointer);  // Attempt to modify read-only memory

    return 0;
}*/
/*#include<stdio.h>
void replace(char *subject,char search,char replace){
}

int main()
{
char subject[]="Hello world";
printf("s", s);
replace(subject,'o','i');
}*/
/*#include<stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int (*p)[3] = &arr; // 'p' is a pointer to the whole array
    
    printf("%d address is %p\n", (*p)[0],p[0]); // Outputs 10
    printf("%d address is %p\n", (*p)[1],p[1]); // Outputs 20
    printf("%d address is %p\n", (*p)[2],p[2]); // Outputs 30
    
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *p = arr;

printf("%p\n", &p);   // Prints the address of the pointer 'p'
printf("%d\n", *(&p)); // This will print the value of 'p', which is the address of arr[0]

}*/
/*#include<stdio.h>
int main()
{
    int arr[]={1,3,4,5,6};
    int a=10;
    printf("Address of arr is %p\n",arr);
    printf("Address of arr is %p\n",&a);
    printf("Address of index[%d] is %p\n",arr[0],&arr[0]);
    for(int i=0;i<strlen(arr);i++)
    {
        printf("Address of index[%d] is %p\n",arr[i],arr[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    int a=32,b=12;
    int *p=&a;
    printf("Value a is %d\n",a);
    printf("Value b is %d\n",b);
    printf("Address of a is %p\n",&a);
    printf("Address of P is %p\n",p);
    printf("Address of a is %p\n",&p);
    printf("Value of P is %d\n",*p);
    printf("Address of b is %p\n",&b);
    printf("Address of P is %d\n",*(p+1)+2);

}*/
/*#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("Address a = %p value = %d\n",&a,a);
    printf("Address a = %p Value = %d\n",p,*p);
    printf("Address p = %p\n",&p);
    printf("Address q = %p\n",q);
    **q=11;
    printf("value = %d\n",a);
    ***r=12;
    printf("value = %d\n",a);
    printf("Address q = %p\n",r);

}*/
/*#include <stdio.h>

void modifyPointer(int **q) {
    **q = 30; // Now, p will point to b
}

int main() {
    int a = 5;
    int *p = &a;  // p points to a
    printf("Before: *p = %d\n", *p); // Output: 5

    modifyPointer(&p);  // Pass the address of pointer p

    printf("After: *p = %d\n", *p); // Output: 10 (p now points to b)

    return 0;
}*/
/*#include<stdio.h>
void increment(int a)
{
    a=a+8;
    printf("addr %p\n",&a);
}
int main()
{
    int a=10;
    increment(a);
    printf("addr %p\n",&a);
    printf("%d",a);
    
}*/
/*#include<stdio.h>

int SumOfElements(int* A, int size) // "int* A" or "int A[]".. it's the same..
{
    int i, sum = 0;
    printf("SOE - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
    for(i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("Sum of elements = %d\n", total);
    printf("Main - Size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
    printf("Size of A %ld\n",sizeof(A));
    return 0;
}*/
/*#include<stdio.h>
void print(char *str)
{
    while(*str !='\0')
    {
        printf("%c",*str);
        str++;
    }
    printf("\n");
}
int main()
{
    char string[]={"Hussain"};
    print(string);
}*/
/*#include<stdio.h>
void print(char *str)
{
    int i=0;
    while(*(str+i) !='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char string[]={"Hussain"};
    print(string);
}*/
/*#include<stdio.h>
int main()
{
    static int a=34,b;
    printf("address of A %p",&a);
    int *h=&b -0x2;
    *h=23;
    printf("\naddress of B:%p",&b);
    printf("\naddress of H:%p",h);
    printf("\nvalue of H:%d",*h);
    printf("\nvalue of A:%d",a);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hussain";
    printf("%p\n",&str);
    char *p=str;
    *p='f';
    printf("%p\n",p);
    printf("%c\n",str[0]);


    for(int i=0;i<=strlen(str);i++)
    {
        printf("%p\n",&str[i]);
        printf("%c\n",str[i]);
    }

}*/
/*#include<stdio.h>
int main()
{
    int arr[2][3]={{1, 2, 3}, {4, 5, 6,}};
    printf("%p",&arr);
    for(int i=0;i<=arr;i++)
    {
        printf("%d\n",arr[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    int arr[2][3]={1,2,3,4,5,6};
    printf("Size of arr %ld\n",sizeof(arr));
    printf("Size of arr[0] %ld\n",sizeof(arr[0]));
    int *p = &arr[0][0];
    *p = 12;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf("Address of arr[%d] = %p\n",arr[i][j],&arr[i][j]);
        }
        printf("\n");
    }
}*/
/*&#include <stdio.h>

int main() {
    // 2D Array declaration
    int B[2][3] = {{2, 3, 6}, {4, 5, 8}};
    
    // Pointer to an array of 3 integers
    int (*p)[3] = B;
    
    // Print base address of the array
    printf("B or &B[0] = %p\n", B);
    printf("*B or B[0] or &B[0][0] = %p\n", *B);
    
    // Address of the second row
    printf("B + 1 or &B[1] = %p\n", B + 1);
    
    // Address of the first element of the second row
    printf("*(B + 1) or B[1] or &B[1][0] = %p\n", *(B + 1));
    
    // Address of the third element in the second row
    printf("*(B + 1) + 2 or B[1] + 2 or &B[1][2] = %p\n", *(B + 1) + 2);
    
    // Access the value of B[0][1] using pointer arithmetic
    printf("*(*B + 1) or B[0][1] = %d\n", *(*B + 1));
    
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf("Enter a number :");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        ptr[i]=1
        
    }
}*/
// Function Pointers in C/C++
/*#include <stdio.h>

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;
    int (*p)(int, int);  // Declaring a function pointer 'p' that can point to a function taking two ints and returning an int.
    
    p = &Add;  // Assigning the address of the function 'Add' to the pointer 'p'.
    
    c = (*p)(2, 3);  // Dereferencing the pointer and calling the function with arguments 2 and 3.
    
    printf("%d", c);  // Outputting the result.
}*/
/*#include<stdio.h>
int Sub(int a,int b){
return a-b;
}
int main(){
    int d;
    int (*p)(int,int);
    p=Sub;
    d=(*p)(20,5);
    printf("%d",d);

}*/
#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

int Multiply(int a, int b) {
    return a * b;
}

int main() {
    // Declare a function pointer
    int (*p)(int, int);
    
    // Point to Add and call it
    p = &Add;
    printf("Add result: %d\n", (*p)(2, 3));  // Output: 5
    
    // Point to Multiply and call it
    p = &Multiply;
    printf("Multiply result: %d\n", (*p)(2, 3));  // Output: 6
}
