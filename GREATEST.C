#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,a[100],min=0,diff=0,i,j,pos1,pos2;
	clrscr();
	printf("enter the limit of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=abs(a[0]-a[1]);
	for
	(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=a[i]-a[j];
			if(abs(diff)>min&&a[j]>a[i])
			{
				min=diff;
				pos1=i;
				pos2=j;

			}
		 }
	}
	printf("required elements are %d,%d",a[pos1],a[pos2]);
	getch();
	return 0;
}