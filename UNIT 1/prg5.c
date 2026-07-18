/* Enrollment No: 92500527175 */

#include<stdio.h>

void main()
{
          int a[10],i,large;

          for(i=0;i<10;i++)
          {
              printf("\n Enter the number %d of A:",i+1);
              scanf("%d",&a[i]);

          }
          large=a[0];
          for(i=0;i<10;i++)
          {

              if(large<a[i])
              {
                  large=a[i];
              }

          }
           printf("The largest number is %d",large);
}









