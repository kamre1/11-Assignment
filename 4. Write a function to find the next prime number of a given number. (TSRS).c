
#include<stdio.h>
int NextPrimeNo(int n)
{
    int i,j;
    for(i=n+1; ; i++)
    {
       for(j=2; j<i; j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
       return (j);
    }
}
int main()
{
    int num, x;
    printf("Enter a number:\n");
    scanf("%d",&num);
    x= NextPrimeNo(num);
   printf("Next Prime Number is: %d\n",x);
   return 0;
}
