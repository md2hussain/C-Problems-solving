#include<stdio.h>
#include <unistd.h>
int main(){
    typedef int _integer;
    _integer i,j,row;
    write(1, "Hello, World!\n", 14);
    printf("Enter a Number of rows :");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}