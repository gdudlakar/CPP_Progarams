//#<bits/stdc++.h>
#include<iostream>
using namespace std;

int fun( int n)
{
	if ( n == 1)
		return 1;
	return fun(n-1) + fun(n-2);
}
main()
{
	int n= 3;
	cout << fun(n);
}
