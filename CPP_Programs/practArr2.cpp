#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";
	char str2[]="hellqwo";
	int true1=0;
	true1=strcmp(str,str2);
	if(true1==0)
	printf("equal");
	else
	printf("not equal");
	return 0;	
}
