//binary search
#include<stdio.h> 
int main()
{
 int a[100],num,i,first,last,middle,n;
  printf("enter the no of elements u wnt in an aaray \n"); 
  scanf("%d ",&n);
  
  for(i=0;i<n;i++) 
   {
    scanf("%d",&a[i]);
    }

  printf("enter the no to be searched");
  scanf("%d",&num);

  first=0;
  last=n-1;
  middle=first+last/2;
  while(first<=last) 
   {
    if(a[middle]==num)
     { 
       printf("search successful \n no present at %d",middle);
        return 0;//break;why cnt i use it hre?
      }
    else
     { 
      if(a[middle]<num)
        first=middle+1;
      else
        last=middle-1;
      }
  }
    if(first>last)
    printf("elmnt not prsnt");
}
