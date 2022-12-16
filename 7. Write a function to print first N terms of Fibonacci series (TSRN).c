
#include<stdio.h>

void FibonacciSeries(int N)

{
    int a=-1,b=1,c;
    for(int i=1; i<=N; i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }

}
int main()
{
    FibonacciSeries(5);
}
