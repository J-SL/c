#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	int *a=0;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	//int a[number];   c99之后可以用数组分配内存，但c99之前不是这样。
	a=(int*)malloc(number*sizeof(int));      //分配number个整形内存，分配后相当于数组。 
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);           //将值输入已分配的内存里。 
	} 
	for(i=number-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	free(a);             //释放内存。 

return 0;
}
