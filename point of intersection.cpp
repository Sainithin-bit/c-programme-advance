#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,q,r,pc,ac,aq,pb,ar,br,qc;
	float x,y;
	printf("Enter the number a:\n");
	scanf("%d",&a);
	printf("Enter the number b:\n");
	scanf("%d",&b);
	printf("Enter the number c:\n");
	scanf("%d",&c);
	printf("Enter the number p:\n");
	scanf("%d",&p);
	printf("Enter the number q:\n");
	scanf("%d",&q);
	printf("Enter the number r:\n");
	scanf("%d",&r);
	y=pc-ar/aq-pb;
	x=br-qc/aq-pb;
	printf("point of intersection:%f,%f",y,x);
	return 0;
	
}
