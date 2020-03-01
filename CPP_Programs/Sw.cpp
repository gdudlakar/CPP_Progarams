#include<iostream>
#include<cstring>
using namespace std;

//int a = 1, b = 2;
//
//int sw( int* x, int* y)
//{
//	*x = *x + *y;
//	a = *x * *y;
//	*x = *x + 1;
//}
int main()
{
	
//	
//	sw(&a,&b);
//	
//	cout << "a  " << a << "   b  " << b << endl;
	
//	char a[10];
//	char *p[] = "hanuman";
//	int len = strlen(p)
//	int i = 0;
//	for (int i = 0; i < len ; i++)
//	{
//		a[i] = 
//	}

char *p[3];
char name[] = "guru\0she";
cout << name << endl;
 p[0] = "a";
 p[1] = "\0";
 p[2] = "c";
for ( int i = 0; i < 3 ; i++)
{
	cout << p[i];
}

//		cout << *(a+i)<< "\t";
	return 0;
}
