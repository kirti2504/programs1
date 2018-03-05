// wap which require user to give hardness ,carbon content and tensile strength of the steel and ouput the grade of the steel.
/* conditions are:
i hardness must be greater than 50
ii carbon content must be less than 0.7
iii tensile strength must be greater than 5600. on the basis of condtions following grades are given.*/

#include<stdio.h>
void main()
{
   int hardness;
   int tensile ;
   float carbon ;
   printf("Enter the hardness,carbon,tensile strength of steel");
   scanf("%d %f %d", &hardness ,&carbon ,&tensile);

   if((hardness>50)&&(carbon <0.7)&&(tensile>5600))
             printf("the steel has grade 10 ");
   else
         {
            if((hardness>50)&&(carbon<0.7)) 
                   printf("the steel hasgrade 9");   
             else
                  {                
                    if((hardness>50)&&(tensile>5600))
                         printf("the steel hasgrade 8");
                      else                  
                       { 
                         if((carbon<0.7)&&(tensile>5600)) 
                              printf("the steel has grade 7");
                          else 
                              {
                                if((hardness>50)||(carbon <0.7)||(tensile>5600))  
                                   printf("the steel hasgrade 6");
                                 else 
                                   printf("the steel hasgarde 5");
                                }
                         }
                     
                     }
                      
                }
}
