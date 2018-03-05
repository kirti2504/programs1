//circular shift 
/*for ex if x=5,y=8,z=10 thn the outpt should be y=5,z=8,x=10*/
#include<stdio.h>
void fun(int *x,int *y,int *z)
{
  int u,v,w;
           u=*x;
           v=*y;
           w=*z;
           *x=w;
           *y=u;
           *z=v;
}
void main()
{

  int a  ,b , c;
  printf("enter 3 nos");
  scanf("%d%d%d",&a,&b,&c);
  printf("\nthe values of a,b,c before shift are a=%d\n b=%d\n c=%d\n",a,b,c);
  fun(&a,&b,&c);
  printf("\nTHE values after circular shift are a=%d\n b= %d\n c= %d\n ",a,b,c);
}




