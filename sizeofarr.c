#include<stdio.h>
 void main()
 {
     int arr[]={2,42,524,524,45,4,5,15,2,82,5,4,55,5,5,};
     int i=sizeof(arr);
     int j=sizeof(int);
     int size=i/j;
     printf("%d \n",size);
     printf("%d \n",i);
     printf("%d",j);
 }