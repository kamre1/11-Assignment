#include<stdio.h>
int Square(int n)
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    a=n*n;
    return a;
}
int main()
{
    int num,k;
  k= Square(num);
  printf("%d",k);
  return 0;

}
