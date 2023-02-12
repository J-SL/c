#include<stdio.h>

int f(void);
int gAll=12;
int main(int argc,char const *argv[])
{
	f();
	f();
	f();
	

return 0;
}



int f(void)
{
	int k=0;
	static int all=1;   //输出说明static int all只做一次，根本原因是static关键字使得 all成为全局变量 
	//printf("&gAll=%p\n",&gAll);
	//printf("&all=%p\n",&all);   //和全局变量gAll的地址相邻 
	//printf("&k  =%p\n",&k);
	printf("in f all=%d\n",all);
	all+=2;
	printf("agn in f all=%d\n",all);
	return all;
}




//静态本地变量实际上是特殊的全局变量，他们位于相同的内存区
 //态本地变量具有全局生存期，函数内的局部作用域，static在这里的意思是局部作用域（本地可访问） 
  
