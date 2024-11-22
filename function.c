/*#include<stdio.h>
int sum()
{
    int a,b,sum;
    printf("Enter a value of A & B :");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum = %d\n",sum);

}
int multi()
{
    int a,b;
    printf("Enter a A & Bvalue :\n");
    scanf("%d %d",&a,&b);
    return a*b;
}
int main()
{
    sum();
    
}*/ 


//function part 2
/*#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result;

    // Function calling
    result = add(5, 3);
    
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}*/
/*#include<stdio.h>
void sum();
int main()
{
    sum(3,2);
}
void sum(int a,int b)
{
    //printf("enTER  A NUMBER :");
    //scanf("%d %d",&a,&b);
    printf("Sum= %d",a+b);
}
*/ //Function part 4

/*#include<stdio.h>
void funct();
int main()
{
    funct(5,3);
}
void funct(int a,int b)
{
    printf("Sum = %d",a+b);
}*/
/*#include <stdio.h>

// Function declaration with parameters
void funct(int x, int y);

int main()
{
    int a = 5; // Define values for a and b
    int b = 10;
    
    funct(a, b); // Call the function with a and b
   
}

// Function definition with parameters
void funct(int x, int y)
{
    printf("Sum = %d", x + y);
}*/
/*
1. Call by Value
In call by value, the function gets copies of the variables, 
so any changes made to the parameters inside the function do not affect the original variables.*/
/*#include<stdio.h>
void callbyvalue(int,int);
int main()
{
    int a=30,b=20;
    callbyvalue(b,a);
    printf("a=%d b=%d",a,b);
}
void callbyvalue(int x,int y)
{
    x=20,y=12;
    printf("a=%d b=%d\n",x,y);
}*/
/*#include<stdio.h>
void callbyref(int*,int*);
int main()
{
    int a,b;
    a=23,b=54;
    callbyref(&a,&b);
    printf("a=%d b=%d",a,b);
}
void callbyref(int *x,int *y)
{
    *x=*x+23;
    *y=*y+32;
    printf("a=%d b=%d",*x,*y);
}*/
/*#include <stdio.h>

// Function declaration for call by value
void callByValue(int x, int y);

int main()
{
    int a = 5;
    int b = 10;

    printf("Before callByValue: a = %d, b = %d\n", a, b);
    callByValue(a, b); // Pass values of a and b
    printf("After callByValue: a = %d, b = %d\n", a, b); // a and b are unchanged

    return 0;
}

// Function definition for call by value
void callByValue(int x, int y)
{
    x = x + 10;
    y = y + 10;
    printf("Inside callByValue: x = %d, y = %d\n", x, y); // Only x and y are modified
}*/


/*
2. Call by Reference
In call by reference, the function receives the addresses of the variables, allowing it to modify the original values.

/*#include <stdio.h>

// Function declaration for call by reference
void callByReference(int *x, int *y);

int main()
{
    int a = 5;
    int b = 10;

    printf("Before callByReference: a = %d, b = %d\n", a, b);
    callByReference(&a, &b); // Pass addresses of a and b
    printf("After callByReference: a = %d, b = %d\n", a, b); // a and b are modified

    return 0;
}

// Function definition for call by reference
void callByReference(int *x, int *y)
{
    *x = *x + 10;
    *y = *y + 10;
    printf("Inside callByReference: x = %d, y = %d\n", *x, *y); // Changes affect original values
}*/


//Function with No Argument No Return Type

/*#include<stdio.h>
void sum(void);
int main()
{
    sum();
}
void sum()
{
    float a=20,b=34;
    printf("Sum= %f",a+b);
}*/
 //Function Without Argument With Return Type
/*#include<stdio.h>
int sum();
int main()
{
    int s;
    s=sum();
    printf("Sum= %d",s);
}
int sum()
{
    int a=4,b=34;
    return a+b;
}*/


/*Example of a Function Without Arguments and With a Return Type
Here’s a simple example where a function calculates the sum of two predefined numbers and returns the result.*/

/*#include <stdio.h>

// Function declaration with int return type and no parameters
int calculateSum();

int main()
{
    int result;
    result = calculateSum(); // Call the function and store the returned result
    printf("Sum = %d\n", result); // Print the result
    return 0;
}

// Function definition
int calculateSum()
{
    int a = 5;
    int b = 10;
    return a + b; // Return the sum of a and b
}*/

//function with argument and without return type:
/*#include<stdio.h>
void sum();
int main()
{
    int a,b;
    sum(23,54);
}
void sum(int x,int y)
{
    printf("sum=%d",x+y);
}*/
/*#include<stdio.h>
void sum(int,float);
int main()
{
    sum(20,30.1);
}
void sum(int x,float y)
{
    printf("Sum =%f",x+y);
}*/

//function with arguments and return type
/*#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,result;
    result=sum(a,b);
    printf("sum=%d",result);
}
int sum(int x,int y)
{
    printf("Enter a A value and B value :");
    scanf("%d %d",&x,&y);
    return x+y;
}*/
/*#include<stdio.h>
void string(char st[10]);
int main()
{
    char name[10];
    string(name);

}
void string(char st[10])
{
    printf("Enter Your Name : ");
    scanf("%s",st);
    printf("%s",st);
}*/

//passing an array as an argument in C

/*#include<stdio.h>
int PrintArray(int arr[],int size);
int main()
{
    int size;
    int arr[]={10,20,30,40,50};
    size=sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,size);
}
int PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Array [%d] [%p] is %d\n",i,&arr[i],arr[i]);
    }
    printf("\n");
}*/
/*#include<stdio.h>
void PrintString(char str[]);
int main()
{
    char name[]="HUSSAIN";
    PrintString(name);
}
void PrintString(char str[])
{
    printf("Name is : %s ",str);

}*/
/*#include<stdio.h>
void Printstr(char str[10]);
int main()
{
    char name[10];
    Printstr(name);
    return 0;
}
void Printstr(char name[10])
{
    printf("Enter a Name : ");
    scanf("%s",name);
    printf("Name is %s\n",name);
}*/
/*#include<stdio.h>
void PrintString(char []);
int main()
{
    char name[]="Hussain";
    PrintString(&name);
}
void PrintString(char name[])
{
    printf("A Name is %s",name);
}*/
/*#include<stdio.h>
void modify(char str1[], char str2[]); // Function prototype

int main() {
    char str1[] = "MOhamed";   // Initialize string str1
    char str2[] = "HUssain";  // Initialize string str2
    modify(str1, str2);      // Call the function modify with str1 and str2
}

void modify(char str1[], char str2[]) {
    int i, l = 0;
    for (i = 0; str1[i] != '\0'; i++) {  // Loop to calculate the length of str1
        l = l + 1;  // Increment l for each character in str1
    }
    str2[1] = 'z';  // Modify the second character of str2 to 'z'

    printf("length of string 1 is: %d\n", l);  // Print the length of str1
    printf("both the strings are: %s %s", str1, str2);  // Print str1 and the modified str2
}*/
/*#include<stdio.h>
void sum(int,int);
int main()
{
    s=0;
    int (*ptr)(int a,int b)=&sum;
    s=sum(2,3);
    printf("Total Number is : %d",s);
    
}
void sum(int x,int y)
{
    return x+y;
}*/
#include<stdio.h>
void fu