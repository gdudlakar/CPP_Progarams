#include<iostream>
#include<cstdlib>

using namespace std;



int main()
{
  char a[] = {'a','d','s','k'};
  int s = 0, e = 7;
  while ( s < e)
  {
    int temp = a[s];
    a[s] = a[e];
    a[e] = temp;
    s++;
    e--;
  }
  for( int i = 1; i < 8; i++)
  {
    cout << a[i] << endl;
  }
}

