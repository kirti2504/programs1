//wap to find area using function.
#include<stdio.h>
#include<math.h>
int fun()
{
   int a,b,c,s;
   float area;
  printf("enter sides OF triangle\n");
  scanf("%d %d %d",&a,&b,&c);
  s=(a+b+c)/2;
   printf("the value of s is %d\n",s);
   printf("the area is given as \n");
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  return area;


}

void main()
{
printf(" the area is %d\n",fun());
}


