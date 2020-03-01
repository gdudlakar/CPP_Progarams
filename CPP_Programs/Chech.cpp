#include<iostream>
using namespace std;
int x =21;
int main()
{
	int x = 21;
	{
		int x = 41;
		cout << ::x<<x<<::x<<"\n";
	}
	cout<<
	return 0;
}
