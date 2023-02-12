#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;//计算1+1/2-1/3+1/4-......+1/n 
		sign=-sign;//利用标记sign来实现加减交替 
	}
	printf("f(%d)=%f",n,sum);

return 0;
}
