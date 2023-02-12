#include<stdio.h>

void minmax(int a[],int len,int *max,int *min);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int min,max;
	//printf("main sizeof(a)=%lu\n",sizeof(a));        大小为40字节 
	//printf("main a=%p\n",a);                         main中a的地址与minmax中a的地址相同 
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("min=%d,max=%d\n",min,max);
	/*int*p=&min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);*/                        //*p和p【0】相同 
return 0;
}
void minmax(int a[],int len,int *max,int *min)
{	
	int i;
	//printf("minmax sizeof(a)=%lu\n",sizeof(a));     以32位架构定义，大小为4字节 ，其不同的原因是minmax中的int a【】是个特殊的const指针，可以替换为*a 
	//printf("minmax a=%p\n",a);
	*min=*max=a[0];
	for(i=1;i<len;i++){
		if(a[i]<*min){
			*min=a[i];
		}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}


//1：函数参数表中的数组实际上是指针 
//2: a==&a【0】，即数组a的地址等于单元a【0】的地址
 
