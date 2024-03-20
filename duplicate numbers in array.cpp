#include<stdio.h>
int main()
{
	int n,i,j;
	{
	  printf("enter the size of array:");
	  scanf("%d",&n);
    }
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("the duplicate elements in the array:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d",arr[i]);
			}
		}
	}
	return 0;
}
