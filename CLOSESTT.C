#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,a[100],i,j,length=0,pos1,pos2,sum;
	clrscr();
	sum=0;
	printf("enter the lmit of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	length=abs(a[0]+a[1]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		       sum=abs(a[i]+a[j]);
		       if(length>sum)
		       {
				length=sum;
				pos1=i;
				pos2=j;
		       }
		}
	}
	printf("required nos. are %d, %d",a[pos1],a[pos2]);
	getch();
	return 0;
}