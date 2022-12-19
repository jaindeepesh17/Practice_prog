#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int* var1, int* var2)
{
	if(*var1 != *var2)
	{
        	*var1 = *var1 + *var2;
        	*var2 = *var1 - *var2;
        	*var1 = *var1 - *var2;
	}
}

int partition(int* arr,int lb, int ub)
{
        int pivot,start, end;
        pivot = arr[lb];
        start = lb;
        end = ub;
        while(start<end)
        {
                while(arr[start] <= pivot)
                {
                        start++;
                }
                while(arr[end] > pivot)
                {
                        end--;
                }
                if(start < end)
                {
			printf("Before swap %d %d\n",arr[start],arr[end]);
                        swap(&arr[start],&arr[end]);
			printf("After swap %d %d\n",arr[start],arr[end]);
                }

        }
	printf("Before swap %d %d\n",arr[lb],arr[end]);
        swap(&arr[lb],&arr[end]);
	printf("After swap %d %d\n",arr[lb],arr[end]);
        return end;
}

void quick_sort(int* arr1, int lb, int ub)
{
        int loc;
        if(lb<ub)
        {
                loc = partition(arr1,lb,ub);
                quick_sort(arr1, lb, loc-1);
                quick_sort(arr1, loc+1, ub);
        }
}

void print(int* arr, int size)
{
        int i;
        for(i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[10],i;
	printf("Enter Array element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Before sorting\n");
	print(arr,10);

	quick_sort(arr,0,9);

	printf("After sorting\n");
	print(arr,10);

}

