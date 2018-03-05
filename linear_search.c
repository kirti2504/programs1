//program to elemnts of an array and to find the elmnt input by the user.
#include<stdio.h>
void main()
{ 

   int a[100] ,n ,i ,present=0 ,num ; 
   
   printf("enter the no of elmnts u want to enter in an aray");
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
   printf("enter the number to u want to search");
   scanf("%d",&num);
   
    for(i=0;i<25;i++)
   {
     if(num==a[i]) 
     present=present+1;
    }

   if(present==0)
    printf("no not present in the array");
    else
    {
      printf("no u want to search is present\n");
      printf("\n the number  of time number present is %d",present);  
    }
}
