#include<stdio.h>

int main(){
	int ch,pov,n;
	while(ch)
	{
		printf("enthr the number to calculate square\n");
		scanf("%d",&n);
		pov = n*n;
		printf(" square of nuber is = %d \n",pov);
		printf("Do you want to stop than press zero\n");
		scanf("%d",&ch);
	}
	return 0;
}
