 #include<stdio.h>
void main()
{
    int a=0,b=1,c=0;
    for(int c=0;c<=100;c++)
    {
       printf("%d  ",a);
       c=a+b;
       a=b;
       b=c;
    }
}