#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char s[]="hello";
	char *p=strchr(s,'l');  //输出的是找到第一个‘l'与它之后的片段 
	printf("%s\n",p);

return 0;
}
