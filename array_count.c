//25 nos are entered from keyboard into an array. wap to find out how many are odd ,even ,negative and postive.
#include<stdio.h>
void main()
{
  int a[100] ,i ,positive=0 ,negative=0 ,odd=0 ,even=0 ,n;
  printf("enter the no of elements u want to enter in an array");
  scanf("%d" ,&n);
  printf("enter elmnts of aray");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
   if(a[i]>=0)
     positive++;
  else
     negative++;

   if(a[i]%2==0)
    even++;
   else  
    odd++;
   }
  printf("no of positive ,negative,odd and even  in the array are %d\n %d\n %d\n %d\n",positive,negative,odd,even);
}
