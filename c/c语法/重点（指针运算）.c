#include<stdio.h>
int main(int argc,char const *argv[])
{
	int n[3][4]=
	{
		{1,2,3,4},
		{8,7,6,5},
		{9,10,11,12},
	};
	
	int*p[3]={n[1],n[0],n[2]};
	int**pp=p;
	printf("%d\n",*(*(pp+1)+2));	//pp指针存储了指针数组p的首个地址 
	printf("%d\n",*((pp[2]-3)));	//pp[2]相当于*（pp+2） 
	printf("%p\n",*pp++);	//相当于printf("%p\n",&n[1]);
	printf("%d\n",*(pp[1]+2));	//前面的pp进行了自增，即*pp++分为2步，1.取pp的内容，也就是9的地址。 2.pp=pp+1，pp不再存储n【1】的地址，而是n【0】的地址。 
	printf("%d\n",*p[1]++);		//同理p【1】也做了自增p【1】=p【1】+1 
	printf("%d\n",*(p[1]+2));
	printf("%d\n",*(p[2]-3));

return 0;
}
