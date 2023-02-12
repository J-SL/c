#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char*mycpy(char*dst,char*src)
{
	while(*dst++=*src++)     //当读到'\0'时while循环结束 
		;                    //空循环 
	*dst='\0';
	return dst;
}


int main()
{
	char src[]="abc";
	char*dst=(char*)malloc(strlen(src)+1);//动态分配内存，+1指'\0'的位置 
	//strcpy(dst,src);
	//printf("%d",dst[0]);         //dst[0]的结果是a，ASCII码表对应97 
	mycpy(dst,src);
	printf("%d",dst[0]); 
	free(dst);

return 0;
}
