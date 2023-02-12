#include<stdio.h>
//#include<string.h>         //要使用strlen需引入这个头文件。

size_t mylen(const char*s)   //定义类strlen函数。 
{
	int idx=0;
	while(s[idx]!='\0'){
		idx++;
	}
	return idx;
 } 
 
 
int main(int argc,char const *argv[])   //argument count(传入main中参数个数）   argument vector（传入main中参数列表，其中argv【0】表示程序名） 
{
	char line[]="hello";
	//printf("strlen=%lu\n",strlen(line));
	printf("mylen=%lu\n",mylen(line));	
	

return 0;
}
