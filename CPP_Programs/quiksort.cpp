#include<iostream>
#include<cstdlib>

using namespace std;


void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = a;
}

int partion( int a[], int l, int h)
{
  int p,ind;
  p = a[h];
  ind = l;
  for( int j = l; j <= h; j++ )
  {
    if(a[j] <= ind )
    {
      swap(a[ind], a[j]);
      ind++;
    }
  }
  swap(a[ind + 1], a[h]);
  return (ind + 1);
}


int quickSort( int a[],int l, int h)
{
   if( l < h)
   {
  int mid = partion( a, l, h);
  quickSort( a, l, mid - 1);
  quickSort( a, mid + 1, h);
   }
}


int main()
{
  int a[] = { 12, 32, 43, 54, 19, 45, 65};
  int n = sizeof(a)/sizeof(a[0]);
  int l = a[0];
  quickSort(a,l,n);
  for( int i = 0; i < n; i++)
      cout << a[i] << endl;
  return 0;
}
