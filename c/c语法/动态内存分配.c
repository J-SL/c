#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	int *a=0;
	int i;
	printf("����������");
	scanf("%d",&number);
	//int a[number];   c99֮���������������ڴ棬��c99֮ǰ����������
	a=(int*)malloc(number*sizeof(int));      //����number�������ڴ棬������൱�����顣 
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);           //��ֵ�����ѷ�����ڴ�� 
	} 
	for(i=number-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	free(a);             //�ͷ��ڴ档 

return 0;
}
