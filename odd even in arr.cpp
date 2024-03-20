#include<stdio.h>
int main()
{
	int n,arr[10],i;
	printf("enter the number of elements in array : ");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers in array = ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("odd numbers in array = ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
