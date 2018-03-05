//program to find value of one number raised to another.
#include<stdio.h>
void main()
{
   int a, b,value=1 ,i=1;
    printf("To find the value of one number raised to another number\n");
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    
     
     while(i<=b)
      {
          value=value*a;
           i=i+1;
      }
    printf(" the value is %d",value);
}


