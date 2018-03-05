//wap to check letter entered by user is capital ,small,a digit or special symbol.
#include<stdio.h>
void main()
{
  char a;
  printf("Enter n character");
  scanf("%c",&a);

  if(a>=65&&a<=90)
    printf("a is capital letter");
  else
      { 
       if(a>=95&&a<=122)
          printf("a is small letter");
       else  
           {
               if(a>=48&&a<=57 )
                  printf("a is case letter");
                else 
                     {
                       if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123||a<=127))
                          printf("special symbols");
                        else 
                          printf("DOES NOT EXIT");
                      } 


               } 
       }

}












