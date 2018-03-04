//program to find leap year.
#include<stdio.h>
void main()
{
  int yr;
  printf("enter n yr");
  scanf("%d",&yr);

  if((yr%400)==0)||(yr%100!=0)&&(yr%4==0))
    printf(" leap yr");

}
