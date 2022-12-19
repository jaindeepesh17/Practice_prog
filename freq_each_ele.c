#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("./a.out Data_in_Numbers");
		return 0;
	}
	else
	{
		int arr[MAX],arr1[MAX],i,j,k,size,count,len=1,freq,flag;
		int num = strlen(argv[1]),demo=0;
		char c;
		char *ch=&c;
		char str[2];
	//	printf("%d\n",num);
		for(i=0,size=0;i<num;i++)
		{
			if(argv[1][i]>='0' && argv[1][i]<='9')
			{
				str[0] = argv[1][i];
				str[1]='\0';
	//			printf("%s ",str);
				arr[size] = atoi(str);
				//demo=atoi(str)+demo;
				//printf("demo= %d\n",demo);
				arr1[size]=0;
				size++;
			}
		}
	//	printf("Array is\n");
	//	for(i=0;i<size;i++)
	//	{
	//		printf("%d\n",arr[i]);
	//	}

		for(i=0;i<size;i++)
		{
			count=0,freq=1;
			for(k=0;k<len;k++)
			{	
				if(arr[i]==arr1[k])
				{
					count=1;
					break;
				}
			}
			if(count!=1)
			{
				for(j=i+1;j<size;j++)
				{	
					if(arr[i]==arr[j])
					{
						freq++;
						arr1[len-1]=arr[i];
						flag=1;
					}
				}
				if(flag==1)
				{
					len++;
				}
				printf("%d occurs %d times\n",arr[i],freq);
			}
		}
	//	printf("Duplicate element %d\n",dup);
	}
}
