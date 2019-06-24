#include<stdio.h>
void getdata(int *a,int *b)
{
        printf("enter 2 num:");
        scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
        *sum=a+b;
}
void output(int sum)
{
        printf("The sum of 2 num is %d",sum);
}
int main()
{
        int x,y,z;
        getdata(&x,&y);
        add(x,y,&z);
        output(z);
}



~
~
~
~
~
~
~
