#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024))){      //maclloc����Ŀռ����ֽ�Ϊ��λ������100*1024*1024Ϊ100�ס� 
		cnt++;                              //(p=malloc(100*1024*1024)����Ϊ�ж����������malloc�����ٷ����ڴ��ˣ���Ϊwhile��0������ֹѭ���� 
	}
	printf("������%dM���ڴ�ռ�",cnt);
	

return 0;
}
