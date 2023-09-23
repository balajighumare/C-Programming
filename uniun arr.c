#include<stdio.h>
void main()
{
    int arr[10]={10,20,30,40,500,20,30,50,60,70};
    int flag=0;
    for(int i=0;i<10;i++)
    {
        flag=0;
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                flag =1;
            }
        }
        if(flag==0)
        {
            printf("%d ",arr[i]);
        }
    }
      
}