#include<stdio.h>
#include<stdlib.h>
add()
{
	int a,b,sum;
	printf("\nEnter two number to get sum");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\n Sum is %d",sum);
}
sub()
{
	int a,b,diff;
	printf("\nEnter two number to get difference");
	scanf("%d%d",&a,&b);
	diff=a-b;
	printf("\n Difference is %d",diff);
}
divi()
{
	int a,b,div;
	printf("\nEnter two number to perform division");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("\nDivision is %d",divi);
}
mul()
{
	int a,b,mul;
	printf("\nEnter two number to perform multiplication");
	scanf("%d%d",&a,&b);
	mul=a*b;
	printf("\nMultiplication is %d",mul);
}
mod()
{
	int a,b,mod;
	printf("\nEnter two number to get remainder");
	scanf("%d%d",&a,&b);
	mod=a%b;
	printf("\nRemainder is %d",mod);
}
isEvenOdd()
{
	int num;
	printf("\nEnter a number to find even or odd");
	scanf("%d",&num);
	if(num%2==0)
	printf("\n It is an Even number");
	else
	printf("\n It is an Odd number");
}
int main()
{
	while(1)
	{
	
	add();
	isEvenOdd();
	sub();
	divi();
	mul();
	mod();
}
exit(0);

}

