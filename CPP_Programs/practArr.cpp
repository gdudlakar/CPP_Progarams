#include<stdio.h>
int main()
{
	char str[]="nagpur";
	str[0]='k';
	printf("%s\n",str);
	str[2]='n';
	printf("%s",str);
	return 0;
}
