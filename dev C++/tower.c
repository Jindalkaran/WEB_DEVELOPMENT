#include<stdio.h>
void tower(int,char,char,char);
void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	tower(n,'A','B','C');
}
void tower(int n,char beg,char aux,char end)
{
	if(n==1)
	{
		printf("%c -> %c\n",beg,end);
		return;
	}
	tower(n-1,beg,end,aux);
	printf("%c -> %c\n",beg,end);
	tower(n-1,aux,beg,end);
	return;
}