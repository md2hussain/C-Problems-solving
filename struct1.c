#include<stdio.h>
struct bill
{
    char name[20];
    int phno;
    char pruct[20];
};
int main()
{
    struct bill customer[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter a customer name :");
        scanf("%s",customer[i].name);
        printf("Enter a customer ph number :\n");
        scanf("%d",&customer[i].phno);
        printf("Enter a product Name :\n");
        scanf("%s",customer[i].pruct);
    }
        for(int i=0;i<3;i++)
    {
        printf("%s\n",customer[i].name);
        printf("%d\n",customer[i].phno);
        printf("%s\n",customer[i].pruct);
    }
}
