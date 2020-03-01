#include<stdio.h>
int main()
{
//	int a[2][3][4]={{2,1,4,3,6,5,8,7,0,9,2,2},{1,2,3,4,5,6,7,8,9,0,1,2}};
//	printf("%u\t%u \t%u \t%u",a,*a,**a,***a);
	int a=90;//{1,2,3,4,5,6,7,8,9,0,0,9,8,7,6,5,4,3,2,3};
    int *p=&a;
    int *d=&p;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",**d);
//	printf("%d\n",***a);	
	
	return 0;
}
