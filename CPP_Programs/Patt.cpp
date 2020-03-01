#include<iostream>
#include<string>

using namespace std;

int main()
{
		string s[] = "Hanuman is ram bhakt";
		string pat[] = "ram";
		int j = 0, n = 0 ;
		int m = sizeof(s);
		int l = sizeof(pat);
		
		for( int i = 0; i < m- l; i++)
		{
			j = 0;
			
			while ( j<m && pat[j] == s[ i+j ])
			{
				j++;
			}
			if ( m == j)
			{
				n = 1;
			}			
		}
		if (m==n)
		{
			cout << " match found" << endl;
		}
		else
		{
			cout << "not found";
		}
return 1;
}
