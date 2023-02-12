#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *mycat(char *a,const char*b)

{

	char *str=(char*)malloc(strlen(a)+strlen(b)+1);
	strcpy(str,a);
	char*s=str+strlen(a);
	strcpy(s,b);
	return str;
}



int main(int argc,char const *argv[])
{
	
	char a[]="abc";
	char b[]="def";
	char *str=mycat(a,b);
	printf("%s",str);
	

	

	return 0;
}
