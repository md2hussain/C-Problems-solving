/*#include<stdio.h>
typedef int integer;
int main()
{
    integer s=23;
    printf("%d",s);
}*/
/*#include<stdio.h>
int main()
{
    enum days{Mon=1,Tue,Wed,thu,Fri,Sat,Sun};
    for(int i=Mon;i<=Sun;i++)
    {
        printf("%d",i);
    }

}*/
#include<stdio.h>
typedef enum {false,true}bool;
int main()
{
    int a;
    bool is_even=false;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        is_even=true;
    }
    if(is_even)
    {
        printf("\nA number is Even");
    }
    else{
        printf("\nA number is odd");
    }
}






