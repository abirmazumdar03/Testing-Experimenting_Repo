#include<stdio.h>
#include<stdlib.h>

int Partition(int *,int,int);
void Quick_Sort(int*,int,int);
void SWAP(int*,int*);

void Quick_Sort(int *a,int low,int high)
{
	int j;
	if(low<high)
	{
		j=Partition(a,low,high);
		Quick_Sort(a,low,j-1);
		Quick_Sort(a,j+1,high);
	}
}

int Partition(int *a,int low,int high)
{
	int pivot=a[low],i=low,j=high;
	while(i<=j)
	{
		do
		{
			i+=1;
		}while(a[i]<=pivot);
		
		do
		{
			j-=1;
		}while(a[j]>pivot);
		if(i<j)
			SWAP(&a[i],&a[j]);
	}
	a[low]=a[j]; a[j]=pivot;
	return j;
}

void SWAP(int *a,int *b)
{
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}

int main(void)
{
	int a[]={45,20,19,41,96,78,10,23,999};
	
	printf("UNSORTED ARRAY \n");
	for(int i=0;i<7;i++)
		printf("%d \t",a[i]);
	
	Quick_Sort(a,0,8);

	printf("\n SORTED ARRAY \n");
	for(int i=0;i<7;i++)
		printf("%d \t",a[i]);
	
}