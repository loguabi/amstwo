#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,temp,temp1,remainder,n=0,result=0;
printf("Enter two numbers(intervals):");
printf("Amstrong numbers betweebn %d and %d are:",a,b);
for(c=a+1;c<b;++c);
{
temp1=c;
temp=c;
}
while(temp!=0)
{
temp/=10;
++n;
}
while(temp1!=0)
{
remainder=temp1%10;
result+=pow(remainder,n);
temp1/=10;
}
if(result==c)
{
printf("%d",c);
}
n=0;
result=0;
}

