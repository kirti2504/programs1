//wap to find mean,average and stndrd deviation.
#include<stdio.h>
#include<math.h>

void fun(int a,int b,int c,int d,int e,int *x,float *av,float *z)
{

  *x=a+b+c+d+e;
  *av=*x/5;
  *z=sqrt(((a-*av)*(a-*av))+((b-*av)*(b-*av))+((c-*av)*(c-*av))+((d-*av)*(d-*av))+((e-*av)*(e-*av)))/5;
}
void main()
{
  int a,b,c,d,e,sum;
  float ave,std;
  printf("enter 5 integes");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  fun(a,b,c,d,e,&sum,&std,&ave);
  printf("sum = %d \n , average = %f \n and standard deviatin of numbers is  %f\n",sum,ave,std);
}

























