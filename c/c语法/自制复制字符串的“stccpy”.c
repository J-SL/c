#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char*mycpy(char*dst,char*src)
{
	while(*dst++=*src++)     //������'\0'ʱwhileѭ������ 
		;                    //��ѭ�� 
	*dst='\0';
	return dst;
}


int main()
{
	char src[]="abc";
	char*dst=(char*)malloc(strlen(src)+1);//��̬�����ڴ棬+1ָ'\0'��λ�� 
	//strcpy(dst,src);
	//printf("%d",dst[0]);         //dst[0]�Ľ����a��ASCII����Ӧ97 
	mycpy(dst,src);
	printf("%d",dst[0]); 
	free(dst);

return 0;
}
