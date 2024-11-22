#include<stdio.h>
union basic{
    int a;char b[10];float c;
};
int main()
{
union basic s;
s.a=23;

printf("A value is %d",s.a);
printf("\nC value is %s",s.b);
printf("Size of union basic: %lu bytes\n", sizeof(s));
}