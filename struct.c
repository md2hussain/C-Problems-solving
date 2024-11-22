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
   scanf("
   printf("\nEnter a%d",&s1.rollno);
   printf("\nEnter a Name: ");
   scanf("%s",s1.Name); Marks: ");
   scanf("%f",&s1.marks);
   printf("------------------Student Info-----------------");
   printf("\nRollNO: %d\nName: %s\nMarks: %f\n",s1.rollno,s1.Name,s1.marks);
   struct basics s2={10,"Hussain",65.6};
   printf("RollNO: %d\nName: %s\nMarks: %f\n",s2.rollno,s2.Name,s2.marks);
   struct basics s[3];
   for(int i=0;i<3;i++)
   {
       printf("\nEnter Rollno, Name, and Marks: ");
       scanf("%d %s %f", &s[i].rollno, s[i].Name, &s[i].marks);
    
   }
   for(int j=0;j<3;j++)
   {
    printf("Rollno:%d\nName:%s\n,Marks:%f\n",s[j].rollno,s[j].Name,s[j].marks);
   }

}