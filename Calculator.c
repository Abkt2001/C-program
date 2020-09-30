/* Abhishek Kumar Tiwari (191881) 3rd Semester(CSE)
   Program to calculate some basics tasks */

#include <stdio.h>
#include<stdlib.h>
int Multiplication();
int Division();
int Subtraction();
int Addition();
int Factor();
int Sum();
int a,b;

int main()
{
    int choice,i;
   while(7)
   {
    printf("1. Multiplication\n");
    printf("2. Division\n");
    printf("3. Subtraction\n");
    printf("4. Addition\n");
    printf("5. Factor\n");
    printf("6. Sum of n natural numbers\n");
    printf("7. Exit\n");
     printf("Enter the choice : ");
    scanf("%d",&choice);

    switch(choice)


        {
        case 1 :
                 Multiplication();
                 break;
        case 2 :
                 Division();
                 break;
        case 3 :
                 Subtraction();
                 break;
        case 4 :
                 Addition();
                 break;
        case 5 :
                 Factor();
                 break;
        case 6 :
                 Sum();
                 break;
        default :
                exit (0);
                break;

        }
    }

    return 0;
}
int Multiplication()
{
   float a,b;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Multiplication of a*b is %.2f\n\n",a*b);
}
int Division()
{
    float a,b;
    float f;
    printf("Enter the value of a : ");
      scanf("%f",&a);
    printf("Enter the value of b : ");
      scanf("%f",&b);

    {
         f=a/b;
         printf("Division of a/b : %.2f\n\n",f);
    }
}
int Subtraction()
{
    float a,b;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Subtraction of a-b : %.2f\n\n",a-b);
}
int Addition()
{
    float a,b;
     printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Addition of a+b : %.2f\n\n",a+b);

}
int Factor()
{
    int i;
    printf("Enter the positive number ");
    scanf("%d",&a);
    if(a==0)
    printf("Factor of %d : %d",a,a);
    else
    {
     printf("Factor of %d : ",a);

    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        printf(" %d ",i);
    }
    }
    printf("\n\n");
}
 int Sum()
 {
   float sum;
   printf("Enter the number ") ;
   scanf("%d",&a);
   sum=a*(a+1)/2;
   printf("Sum of upto %d : %.2f\n\n",a,sum);
 }

