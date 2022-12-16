#include<stdio.h>

int primeCheck(int n)
{
    int count=0, i;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    return count;
}
int main()
{
   int num;
   printf("Enter a Number:\n");
   scanf("%d",&num);

    int c = primeCheck(num);
    if(c==2)
        printf("Prime Number");
    else
        printf("Not Prime Number:");
    return 0;
}
