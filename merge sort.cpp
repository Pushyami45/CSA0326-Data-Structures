#include <stdio.h>
void mergeSort(int array[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
	{
        int min_index = i;
        for (int j = i + 1; j < size; j++) 
		{
            if (array[j] < array[min_index]) 
			{
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}
void reverseArray(int array[], int size) 
{
    int start = 0;
    int end = size - 1;
    while (start < end) 
	{
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    int array[] = {10, 5, 20, 15, 30};
    int size = sizeof(array) / sizeof(array[0]);
    // Sorting the array
    mergeSort(array, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    reverseArray(array, size);
    printf("Reversed sorted array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Second minimum element: %d\n", array[size-2]);
    printf("Second maximum element: %d\n", array[2]);
    return 0;
}
