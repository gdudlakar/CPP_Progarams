#include <iostream>
#include <fstream>

using namespace std;

int main()
{
		char name[10];
			float cost;
	ofstream guru("such");
	cout<<"enter the item name";

	cin>>name;
	
	guru<<name<<endl;
	
	cout<<"enter the item cost";

	cin>> cost;
	
	guru<<cost<<endl;
	
	guru.close();
	
	ifstream inf("such");
	
	inf>>name;
	inf>>cost;
	
 	cout<<"eitem name"<<name<<endl;
 	cout<<"item name cost"<<cost<<endl;
 	
 	inf.close();
 	
 	return 0;
}
