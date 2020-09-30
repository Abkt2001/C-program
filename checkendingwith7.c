#include<stdio.h>
void fun(int x)
{
  int j;
  if((x+3)%10==0)
   printf("Enter no. is ending with 7");
  else
  {
   printf("Not ending with 7\n");
   j=x/10;
   printf("%d",j);
  /* fun(j); */
  }
}
int main()
{
  int i;
  printf("Enter the no.");
  scanf("%d",&i);
  fun(i);


}
