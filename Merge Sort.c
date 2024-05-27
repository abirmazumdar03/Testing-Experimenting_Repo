#include<stdio.h>
#include<stdlib.h>

void Merge(int*,int,int,int);

void Merge_Sort(int *a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		Merge_Sort(a,low,mid);    // Left Sub Tree
		Merge_Sort(a,mid+1,high);  // Right Sub Tree
		Merge(a,low,mid,high);   // To merge Two Arrays of size n1 and n2 n1<=n2
	}
}

void Merge(int *a,int low,int mid,int high)
{
	int i=low,j=mid+1,k=low,b[8];
	
	while(i<=mid && j<=high)   // i<=mid n1 is alive AND j<=high n2 is alive
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)  // if n1 gets exhausted 
	{
		while(j<=high)  //flush out all the elemnts of the n2 
		{
			b[k]=a[j];
			j++; k++;
		}
	}
	else
	{
		while(i<=mid) //else n2 is exhausted flush out all the elemnts of the n1
		{
			b[k]=a[i];
			i++; k++;
		}
	}
	
	for(i=low;i<=high;i++)
		a[i]=b[i];
}

int main(void)
{
	int a[]={45,89,12,20,36,1,88,13};
	printf("UNSORTED ARRAY \n");
	for(int i=0;i<8;i++)
		printf("%d \t",a[i]);
	
	Merge_Sort(a,0,7);
	
	printf("\nSORTED ARRAY \n");
	for(int i=0;i<8;i++)
		printf("%d \t",a[i]);	
}