#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,det;
	printf("Enter the coefficent a:");
	scanf("%d",&a);
	printf("Enter the coefficent b:");
	scanf("%d",&b);
	printf("Enter the coefficent c:");
	scanf("%d",&c);
	det=b*b-4*a*c;
	if(det<0)
	printf("roots are imaginary");
	else
	{
	r1=(-b+sqrt(det))/(2*a);
	r2=(-b-sqrt(det))/(2*a);
	printf("roots are %f and %f",r1,r2);
	}
return 0;
}


