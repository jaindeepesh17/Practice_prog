#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble_sort(int*,int);
void insertion_sort(int*,int);
void quick_sort(int*,int,int);
void print(int*, int);
int main()
{
	int arr[45000],arr1[45000],arr2[45000],j=0,diff;
	int a=sizeof(arr)/sizeof(arr[0]),i = a,lb,ub;
	int start_time,End_time,diff_time;
	while(i>0)
	{	
		arr[j] =arr1[j]=arr2[j] = rand()/10000000;
		j++;
		i--;
	}

//	for(i=0;i<a;i++)
//	{
//		arr1[i]=arr[i];
//		arr2[i]=arr[i];
//	}
//	printf("Before_sorting\n");
//	for(i=0;i<150000;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
	start_time=clock();
	printf("Bubble_sort_start_time %d\n",start_time);
	bubble_sort(arr,a);
	End_time=clock();
	printf("Bubble_sort_end_time %d\n",End_time);
	diff_time= End_time -start_time;

	printf("bubble_sort %d\n",diff_time);


	start_time=clock();
	printf("insertion_sort_start_time %d\n", start_time);
	insertion_sort(arr1,a);
	End_time=clock();
	printf("Insertion_sort_end_time%d\n",End_time);

	diff_time= End_time -start_time;
	printf("Insertion_sort %d\n",diff_time);

	printf("Before sorting\n");
	print(arr2,a);
	start_time=clock();
	printf("Quick_sort_start_time %d\n",start_time);

	quick_sort(arr2,0,a-1);
	End_time=clock();
	printf("Quick_sort_End_time %d\n",End_time);
	diff_time= End_time -start_time;

	printf("Quick_sort %d\n",diff_time);

	printf("After sorting");
	print(arr2,a);

}

void bubble_sort(int* arr1,int n)
{
	int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n-i;j++)
                {
                        if(arr1[j]>arr1[j+1])
                        {
                                arr1[j]=arr1[j]+arr1[j+1];
                                arr1[j+1]=arr1[j]-arr1[j+1];
                                arr1[j]=arr1[j]-arr1[j+1];
                        }

                }
        }
//	printf("After sorting\n");
  //      for(i=0;i<n;i++)
    //    {
      //          printf("%d ",arr1[i]);
        //}
}

void insertion_sort(int* arr1, int n)
{
	int i,j,temp;
        for(i=1;i<n;i++)
        {
                temp=arr1[i];
                for(j=i-1;j>=0 && arr1[j]>temp;j--)
                {
                        arr1[j+1]=arr1[j];
                }
                arr1[j+1]=temp;
        }
      // printf("%d\n",diff_time);
  //      printf("After sorting\n");
    //    for(i=0;i<n;i++)
      //  {
        //        printf("%d ",arr1[i]);
}

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
			swap(&arr[start],&arr[end]);
		}

	}
	swap(&arr[lb],&arr[end]);
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















