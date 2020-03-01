#include<bits/stdc++.h>
#include<malloc.h>

using namespace std;

int main()
{
	int *p = (int*) malloc(sizeof(int)*4);
	
	for(int i = 0; i<4 ; i++)
	 cin >>p[i];
	 for(int i = 0; i<4 ; i++)
	 cout <<p[i] <<"\t";
}
