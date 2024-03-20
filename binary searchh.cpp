#include<stdio.h>
int main()
{
	int low,high,mid,n,i,key,arr[100];
	printf("enter the size of array : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	scanf("%d",arr[i]);
	printf("enter the value to find n :");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		low=mid+1;
		else if(arr[mid]==key)
		{
			printf("%d is dound at location %d.n",key,mid+1);
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
	}
	if(low>high)
	printf("not found");
	return 0;
}
