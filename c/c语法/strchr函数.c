#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char s[]="hello";
	char *p=strchr(s,'l');  //��������ҵ���һ����l'����֮���Ƭ�� 
	printf("%s\n",p);

return 0;
}
