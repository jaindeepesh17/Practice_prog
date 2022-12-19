#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
int main(int argc, char* argv[])
{
	if(argc!=2)
	{
		printf("./a.out file");
		return 0;
	}
	else
	{
		FILE *fp;
		char c;
		char *ch = &c ;
		int num,arr[MAX],i=0,j,k,count=0;
		fp= fopen(argv[1],"r");
		if(fp==NULL)
		{
			printf("File not opened\n");
			return 0;
		}
		while((*ch=fgetc(fp))!=-1)
		{
		//	printf("hii\n");
			if(*ch >= '0' && *ch <= '9')
			{
		//		printf("hello\n");
				num = atoi(ch);
		//		num=ch-48;
		//		printf("Ram\n");
			       arr[i++]=num;	       
			}
		}
	//	for(j=0;j<i;j++)
	//	{
	//		printf("%d\n",arr[j]);
	//	}
		for(j=0;j<i;j++)
		{
			count=0;
			for(k=0;k<i;k++)
			{
				if(j!=k)
				{
					if(arr[j]==arr[k])
					{
						count++;
						break;
					}

				}
			}
			if(count==0)
			{		
				printf("%d\n",arr[j]);
			}	
		}
	}
}

