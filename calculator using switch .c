#include<stdio.h>
#include<math.h>
int main()
{
float a,b,res;
char d;
printf("enter the number");
scanf("%f%c%f",&a,&d,&b);
switch(d)
{
case'+':
res=a+b;
break;
case'-':
res=a-b;
break;
case'*':
res=a*b;
break;
case'/':
res=a/b;
break;
}
printf("result=%d,res);
}
