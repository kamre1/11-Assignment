// 1! /1+2!/2+3!/3+4!/4+5!/5

#include<stdio.h>

int fact(int no)
{
    int k=0, ans=1;
    while(k<=no-1)
    {
        ans=ans+ans*k;
        k++;
    }
    return ans;
}
int main()
{
    int sum=0;
    for(int k=1; k<=5; k++)
        sum+=fact(k)/k;
    printf(" The Sum of is: %d \n",sum);

}
