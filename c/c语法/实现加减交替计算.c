#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;//����1+1/2-1/3+1/4-......+1/n 
		sign=-sign;//���ñ��sign��ʵ�ּӼ����� 
	}
	printf("f(%d)=%f",n,sum);

return 0;
}
