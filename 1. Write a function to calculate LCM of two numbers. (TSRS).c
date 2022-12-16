#include<stdio.h>

int LCM(int a,int b)
{
    int max;
    for(max=a>b?a:b; max<=a*b; max=max+(a>b?a:b))
        if(max%a==0 && max%b==0)
            break;
    return max;
}
int main()
{
    int lcm;
  lcm=LCM(1296,1456);
  printf("LCM of given two number is:%d",lcm);
}
