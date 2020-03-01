#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble(int arr[], int i, int n);
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
		printf(" ");
}
 

int main()
{
    int arr[1000],n,T,i;
    
    printf("enter the how manny time u need to get sorting done\n");
  
    scanf("%d",&T);
    
    while(T--){
	printf("entert the elinet\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    bubbleSort(arr, n);
    printf("Sorting\n");
    printArray(arr, n);
    }
    return 0;;
}
void bubble(int arr[], int i, int n)
{
    int j,p;
    for( i = 0; i<n ; i++)
    {
    for( p = 0; p < n-1; p++)
    {
        for(j = 1; j < n; j++ )
        {
            if(arr[p] > arr[j])
                swap(&arr[p],&arr[j]);
        }
    }
	}
}
