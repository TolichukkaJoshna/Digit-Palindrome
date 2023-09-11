#include<stdio.h>
main()
{
	int t,n,i=1,r,s=0;
	printf("enter a number..:");
	scanf("%d",&n);
	t=n;
	while(i<=n)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(t==s)
	{
		printf("\nPALINDROME");
	}
	else
	{
		printf("\nNOT A PALINDROM");
	}
}
