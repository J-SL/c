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
	printf("%d\n",*(*(pp+1)+2));	//ppָ��洢��ָ������p���׸���ַ 
	printf("%d\n",*((pp[2]-3)));	//pp[2]�൱��*��pp+2�� 
	printf("%p\n",*pp++);	//�൱��printf("%p\n",&n[1]);
	printf("%d\n",*(pp[1]+2));	//ǰ���pp��������������*pp++��Ϊ2����1.ȡpp�����ݣ�Ҳ����9�ĵ�ַ�� 2.pp=pp+1��pp���ٴ洢n��1���ĵ�ַ������n��0���ĵ�ַ�� 
	printf("%d\n",*p[1]++);		//ͬ��p��1��Ҳ��������p��1��=p��1��+1 
	printf("%d\n",*(p[1]+2));
	printf("%d\n",*(p[2]-3));

return 0;
}
