#include<stdio.h>
//#include<string.h>         //Ҫʹ��strlen���������ͷ�ļ���

size_t mylen(const char*s)   //������strlen������ 
{
	int idx=0;
	while(s[idx]!='\0'){
		idx++;
	}
	return idx;
 } 
 
 
int main(int argc,char const *argv[])   //argument count(����main�в���������   argument vector������main�в����б�����argv��0����ʾ�������� 
{
	char line[]="hello";
	//printf("strlen=%lu\n",strlen(line));
	printf("mylen=%lu\n",mylen(line));	
	

return 0;
}
