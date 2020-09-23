#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	c=(a<b)*a+(a>=b)*b;
	d=(a>b)*a+(a<=b)*b;
	printf("baga too=%d\n",c);	
	printf("ih too=%d",d);
}
