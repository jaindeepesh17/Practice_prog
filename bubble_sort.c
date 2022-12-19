#include<stdio.h>
#include<time.h>
int main()
{
	int arr[5],temp,i,j,start_time,End_time,diff_time;
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("size of array %d\n",n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	start_time=clock();
	printf("%d\n", start_time);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
			
		}
	}
	End_time=clock();
	diff_time= End_time -start_time;
       printf("%d\n",diff_time);	
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}


}
