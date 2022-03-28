#include<stdio.h>
int main()
{
int sum=0, n, rem;
printf("Enter numbers to find sum\n");
scanf("%d",&n);
while(n!=0)
{
 rem= n%10;
 sum =sum+rem;
 n= n/10;
}
printf("sum of digit of numbers is=%d",sum);
}
