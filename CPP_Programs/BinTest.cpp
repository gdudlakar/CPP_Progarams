
#include<bits/stdc++.h>

using namespace std;

int binSearch(int A[],int left,int right,int x)
{
	if ( left >= right)
	{
		int mid = l + (r - 1)/2;
		
		if( A[mid] == x)
			return mid;
		else if ( A[mid] < l)
			return binSearch(a,l,mid-1,x);
		return binSearch(a,l,mid+1,x);
	}
	return -1;
}
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 
}
