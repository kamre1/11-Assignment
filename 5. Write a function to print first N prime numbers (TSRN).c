#include<stdio.h>
int NprimeNo(int x)
{
    int i;
    for(i=2; i<x; i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{
    int N, x=2;
    printf("Enter a Number:\n");
    scanf("%d", &N);
    while(N)
    {
        if(NprimeNo(x))
        {

            printf("%d\n",x);
            N--;
        }
        x++;
    }
}
