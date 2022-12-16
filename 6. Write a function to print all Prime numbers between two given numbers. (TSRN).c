
#include<stdio.h>
void PrimebetweenTwoNo(int a, int b)
{
    int i,j;
    for(i=a+1; i<b-1; i++)
    {
        for(j=2; j<i; j++)
            if(i%j==0)
            break;
        if(j==i)
            printf("%d\n",i);
    }
}
int main()
{
   // int n, m,y;
   // printf("Enter a Number:");
   // scanf("%d %d",&n,&m);
     PrimebetweenTwoNo(100,1000);
   // printf("Prime Between Two Number: %d \n ",y);

}
