#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],ceven=0,codd=0,i,j=0,b[100],n;
	clrscr();
	printf("enter the limit of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			ceven++;
		}
		else
		{
			codd++;
		}
	}
	 for(i=0;i<n;i++)
	 {
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			b[ceven]=a[i];
			ceven++;
		}
	 }
	 for(i=0;i<n;i++)
	 {
		printf("%d  ",b[i]);
	 }
	 getch();
	 return 0;
}