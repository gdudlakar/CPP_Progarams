#include<iostream>

using namespace std;

int main()
{
	int a[] = { 10 , 23, 54 };
	int *b;
	b = &a[0];
	
	int c[] = {10};
	int *d;
	d = &c[0];
	
	
	cout << b -1 << endl;
	return 0;
}
