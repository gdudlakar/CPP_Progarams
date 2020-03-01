#include<iostream>

using namespace std;
int pf(int*);
int main()
{
	int a[] = {1,2,3,4,5,6};
	int c = (sizeof(a)/sizeof(a[0]));
	//a = a+1;
	cout << c <<sizeof(a)<<" " << endl;
	pf(a); 
}
int pf(int *a)
{
	for(int i = 0; i < a[i];i++)
		cout << a[i] << " " ;
}
