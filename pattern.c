/*#include<stdio.h>
int main()
{
    int i,j,k,p;
    printf("Enter a Number of rows:");
    scanf("%d",&k);
    printf("\nEnter a Number of stars:");
    scanf("%d",&p);    
    for(i=1;i<=k;i++)
    {
       for(j=1;j<=p;j++)
       {
        printf("*");
       } 
       printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
}*/

/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");

        }
        printf("\n");
    }
}*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=5;j++)
        {
        if((i+j)<6)
          printf(" ");
        else
          printf("*");
        }
        printf("\n");
    }     
}*/

