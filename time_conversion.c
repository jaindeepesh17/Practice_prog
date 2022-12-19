#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void time_conversion(char*);
int main()
{
	char str[20];
	printf("Enter time string\n");
	scanf("%s",str);

	printf("String is %s\n",str);
	time_conversion(str);
	printf("After conversion %s\n",str);
}

void time_conversion(char *s)
{
	int i,num,len;
    	char *p1,arr[2];
    	if(p1=strstr(s,"PM"))
    	{
        	len = p1 - s;
        //	len = len;
        	for(i=0;i<2;i++)
        	{
            		arr[i]=s[i];
        	}
        	arr[i]='\0';
        	num = atoi(arr);
        	num = num+12;
       		arr[0] = num/10+48;
        	arr[1] = num%10+48;
        	for(i=0;i<2;i++)
        	{
            		s[i] = arr[i];
        	}
        	s[len] = '\0';
    	}
    	else {
    	p1 = strstr(s,"AM");
    	len = p1 -s;
    //	len = len -2;
    	s[len] = '\0';
    	}


}
