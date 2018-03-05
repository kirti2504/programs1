//program to display an menu using switch.
#include<stdio.h>
void main()
{
  int choice,n,i;
  while(1)
  {
     printf("1.factorial\n");
     printf("2. prime\n");
     printf("3.odd\n");
     printf("4.exit");
     printf("5.enter choice);
     scanf("%c",&choice);
     switch(choice)
     {
       case 1:
       printf("enter no");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
          {
              f=1;
              f=f*i;
              printf("%d",f);
                break;
           }

        case 2:
         printf("enter n no");
         scanf("%d",&n);
         for(i=2;i<num;i++)
           {
            if(n%i==0)
            printf("prime");
            break;
           }

        case 3:
        printf("enter n no");
        scanf("%d",&n);
        if(n%2==0)
         printf("even");
        case 4:
        exit();
      }

   }
}



