//program to find percentage  and average  uisng function and pointers
#include<stdio.h>
void fun(int,int,int,float*,float*);
void main()
{

   int a, b,  c;
   float av,per;
   printf("enter marks obtained in 3 subjects");
   scanf("%d%d%d",&a,&b,&c);
   fun(a,b,c,&av,&per);
   printf("The average is %f\n and the percentage is %f",av,per);
}

void fun(int x,int y,int z,float *ave,float *perc)
{

  *ave= (x+y+z)/3.0;
  *perc= ((x+y+z)*100)/300;

}
