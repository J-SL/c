#include<stdio.h>

void minmax(int a[],int len,int *max,int *min);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int min,max;
	//printf("main sizeof(a)=%lu\n",sizeof(a));        ��СΪ40�ֽ� 
	//printf("main a=%p\n",a);                         main��a�ĵ�ַ��minmax��a�ĵ�ַ��ͬ 
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("min=%d,max=%d\n",min,max);
	/*int*p=&min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);*/                        //*p��p��0����ͬ 
return 0;
}
void minmax(int a[],int len,int *max,int *min)
{	
	int i;
	//printf("minmax sizeof(a)=%lu\n",sizeof(a));     ��32λ�ܹ����壬��СΪ4�ֽ� ���䲻ͬ��ԭ����minmax�е�int a�����Ǹ������constָ�룬�����滻Ϊ*a 
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


//1�������������е�����ʵ������ָ�� 
//2: a==&a��0����������a�ĵ�ַ���ڵ�Ԫa��0���ĵ�ַ
 
