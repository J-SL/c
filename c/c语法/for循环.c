#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int fact=1; 
	int i=1;
	//for (int i=1;i<=n;i++){   [Error] 'for' loop initial declarations are only allowed in C99 or C11 mode8
		//[Note] use option -std=c99, -std=gnu99, -std=c11 or -std=gnu11 to compile your code ����c99��ʽ��Ҫ��ǰ׺-std=c99������int iҪд���档 
	for (i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}

