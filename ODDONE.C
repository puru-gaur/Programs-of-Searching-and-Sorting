#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,a[100];
   clrscr();
   printf("enter the limit");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      a[i+1]=a[i]^a[i+1];
   }
   printf("required element is %d",a[n-1]);
   getch();
   return 0;
}