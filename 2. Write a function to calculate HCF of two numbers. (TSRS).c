
#include<stdio.h>

int HCF(int a, int b)
{
    int HCF;
    for(HCF=a<b?a:b; HCF>=1; HCF--)
        if(a%HCF==0 && b%HCF==0)
               break;
           return HCF;
}
int main()
{
    int hcf;
    hcf=HCF(12,14);
    printf("HCF of two given number is:%d",hcf);
}
