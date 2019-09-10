#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,ac,bd;
	float distance;
	printf("enter the point a:\n");
	scanf("%d",&a);
	printf("enter the point b:\n");
	scanf("%d",&b);
	printf("enter the point c:\n");
	scanf("%d",&c);
	printf("enter the point d:\n");
	scanf("%d",&d);
	printf("enter the point e:\n");
	scanf("%d",&e);
	distance=(ac+bd+e)/sqrt(c^2+d^2);
	printf("peripendicular distance :%f",distance);
	return 0;
}


