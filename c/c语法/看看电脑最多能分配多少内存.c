#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024))){      //maclloc申请的空间以字节为单位，这里100*1024*1024为100兆。 
		cnt++;                              //(p=malloc(100*1024*1024)可视为判断条件，如果malloc不能再分配内存了，则为while（0），终止循环。 
	}
	printf("分配了%dM的内存空间",cnt);
	

return 0;
}
