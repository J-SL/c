#include<stdio.h>
int main()
{
	int x;
	int a;
	int t=0;
	printf("�����룺"); 
	scanf("%d",&x);
	do{
		a=x%10;
		//printf("%d",a); ����700���ɵ�007 
		x/=10;
		t=t*10+a;
	}while(x>0);
	printf("%d",t);

return 0;
}
