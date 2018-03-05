//factorial using function
#include<stdio.h>
void fact(int x);//function prototype
void main()
{
      int b;
     printf("factorial of an number\n");
     fact(b);//fact(4)//function calling
}

void fact(int x)//function defination
{

   int i,fac=1;
   printf("enter the value to be factorial\n");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
    {      
       fac=fac*i;
   
       
    }

 printf("the factorial is %d",fac);
} 




