
#include<bits/stdc++.h>
using namespace std;
int bin_search(int A[], int left, int right, int k)
{

       if ( right >= left) 
       {
       	int mid = left+right/2;
       	if( k == A[mid])
       		return mid;
       	if( k < A[mid])
       		return bin_search(A,left,mid - 1,k);
       	return bin_search(A,mid + 1,right,k);
	   }
	   return -1;
}
int main()
{

        int N;
        cout << "common man" << endl;
        cin>>N;
        int a[N];cout << "Marrey bhava" << endl;
        for(int i=0;i<N;i++)
            cin>>a[i];
            cout << "HEEEEEEEEEEEEEEE" << endl;
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        if( found == -1)
        	cout << "sory not found" << found <<endl;
        else
			cout<<a[found] <<endl;
}

