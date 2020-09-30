#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter the  positive no. for factorial");
    scanf("%d",&a);
    fact(a);
    printf("Factorial of %d is %d",a,fact(a));


}
int fact(int i)
{  if(i==1)
        return 1;
    if(i==0)
            return 1;
   else
   {

        int x;
        x=fact(i-1)*i;
        return (x);

    }
}
