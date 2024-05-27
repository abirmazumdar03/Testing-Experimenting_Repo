#include<stdio.h>
#include<stdlib.h>
int Bin_Search(int *p,int low,int high, int key)
{
	int mid=0;
	if(low==high)
	{
		if(key==p[low])
			return 1;
		else
			return 0;
	}
	else
	{
		mid=(low+high)/2;
		if(p[mid]==key)
			return 1;
		else if(p[mid]>key)
			return Bin_Search(p,low,mid-1,key);
		else
			return Bin_Search(p,mid+1,high,key);
	}
}

int main(void)
{
	int a[]={2,5,11,17,19,21,26,33,39,40,51,65,79,88,99};  //Sorted Array of size=15
	int key;
	printf("Enter a Searching Key : ");
	scanf("%d",&key);
	
	if(Bin_Search(a,0,14,key))
		printf("KEY IS PRESENT  Search Successful\n");
	else
		printf("KEY IS NOT PRESENT Search Unsccessful\n");
}
