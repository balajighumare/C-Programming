#include<stdio.h>
void main()
{
    int arr[10]={10,20,30,40,50,20,30,50,60,70};
    int arr1[5]={30,50,80,90,50};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr1[j])
            {
                printf("%d ",arr1[j]);
            }
        }
    }
}