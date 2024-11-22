/*#include<stdio.h>
int main()
{
    printf("Hi, I am Hussain\n");
}*/
/*include<stdio.h>
int main()
{
    int i;
    printf("Enter a Any random number :");
    scanf("%d",&i);
    printf("A random number is %d\n",i);
}*/
/*include<stdio.h>
int main()
{
    int a=5,b=3;
    printf("The sum %d and %d is %d",a,b,a+b);
    return 0;
}*/
#include<stdio.h>
struct basics{
    int rollno;
    char Name[20];
    float marks;
};
int main()
{
   struct basics s1;
   printf("\nEnter a Rollno: ");
   scanf("%d",&s1.rollno);
   printf("\nEnter a Name: ");
   scanf("%s",s1.Name);
   printf("\nEnter a Marks: ");
   scanf("%f",&s1.marks);
   printf("------------------Student Info-----------------");
   printf("\nRollNO: %d\nName: %s\nMarks: %f\n",s1.rollno,s1.Name,s1.marks);
   struct basics s2={10,"Hussain",65.6};
   printf("RollNO: %d\nName: %s\nMarks: %f\n",s2.rollno,s2.Name,s2.marks);

}