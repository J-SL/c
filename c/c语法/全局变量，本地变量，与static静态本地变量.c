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
	static int all=1;   //���˵��static int allֻ��һ�Σ�����ԭ����static�ؼ���ʹ�� all��Ϊȫ�ֱ��� 
	//printf("&gAll=%p\n",&gAll);
	//printf("&all=%p\n",&all);   //��ȫ�ֱ���gAll�ĵ�ַ���� 
	//printf("&k  =%p\n",&k);
	printf("in f all=%d\n",all);
	all+=2;
	printf("agn in f all=%d\n",all);
	return all;
}




//��̬���ر���ʵ�����������ȫ�ֱ���������λ����ͬ���ڴ���
 //̬���ر�������ȫ�������ڣ������ڵľֲ�������static���������˼�Ǿֲ������򣨱��ؿɷ��ʣ� 
  
