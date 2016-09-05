#include<stdio.h>
#include<conio.h>
void quicksort(int array[],int firstindex,int lastindex)
{
	int pivotindex,temp,index1,index2;
	if(firstindex<lastindex)
	{
		 pivotindex=firstindex;
		 index1=firstindex;
		 index2=lastindex;
		 while(index1<index2)
		 {
		       while(array[index1]<=array[pivotindex])
		       {
			     index1++;
		       }
		       while(array[index2]>array[pivotindex])
		       {
				 index2--;
		       }
		       if(index1<index2)
		       {
			    temp=array[index1];
			    array[index1]=array[index2];
			    array[index2]=temp;
		       }
		 }
		 temp=array[pivotindex];
		 array[pivotindex]=array[index2];
		 array[index2]=temp;
		 quicksort(array,firstindex,index2-1);
		 quicksort(array,index2+1,lastindex);
	}
}
int main()
{
      int array[200],n,i;
      printf("enter the number of element you want to sort");
      scanf("%d",&n);
      printf("enter elements in the list :");
      for(i=0;i<n;i++)
      {
	scanf("%d",&array[i]);
      }
      quicksort(array,0,n-1);
      {
	     printf("sorted elements :");
	     for(i=0;i<n;i++)
	     {
		 printf("%d",array[i]);
	     }
	     getch();
	     return 0;
      }
}