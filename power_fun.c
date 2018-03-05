//program to find value of one no over another.
#include<stdio.h>
void power(int,int);
void power(int x,int y)
{
    int i ,ans=1;
   printf("enter x n y\n");
   scanf("%d%d",&x,&y);

   for(i=1;i<=y;i++)
   {
    ans=ans*x;
   } 
   
   printf("the answer is %d",ans);
   
}
void main()
{
    int a,b;
    printf("power function\n");
    power(a,b); 
}
