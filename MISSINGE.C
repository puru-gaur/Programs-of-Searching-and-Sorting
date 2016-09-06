#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0,sum2=0,a[100],n;
	clrscr();
	printf("enter the value of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=(n*(n+1))/2;
	for(i=0;i<n-1;i++)
	{
		sum2=sum2+a[i];
	}
	printf("missing element is %d",sum-sum2);
	getch();
	return 0;
}