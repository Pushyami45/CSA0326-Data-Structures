#include <stdio.h>
int main()
{
   int a[100],i,n,min,max;
   printf("Enter size of the array : ");
   scanf("%d",&n);
   printf("Enter elements in array : ");
   for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
	min=a[0];
	max=a[0];
    for(i=1; i<n; i++)
    {
         if(a[i]<min)
		  min=a[i];   
		   if(a[i]>max)
		    max=a[i];       
    }
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
	return 0;
}
