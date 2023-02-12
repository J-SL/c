#include<stdio.h>

int divide(int a,int b,int *result);

int main()
{
	int a;
	int b;
	int c;
	printf("Çë·Ö±ğÊäÈëa£¬b£º");
	scanf("%d,%d",&a,&b) ;
	if(divide(a,b,&c)){
		printf("%d/%d=%d",a,b,c);
	}

return 0;
}

int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0){
		ret=0;
	}else{
		*result=a/b;
	}
	
	return ret;
}
