#include<stdio.h>
int main()
{
int a,b=3,c=0;
printf("Enter a no.");
scanf("%d",&a);
if(a==1)
   { printf("Enter no. is composite");
   }
else
    {while(b<(a))
        {
        if(a%b==0)
           { c++;
            break;
            }
            b++;
        }
        if(c==0)
            {
            printf("Enter no. is not composite ");
            }
        else
            printf("Enter no. is composite");
    }
}
