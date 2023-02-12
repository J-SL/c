#include<stdio.h>

int search(int key,int a[],int length)//length不可或缺 
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++){
			if(a[i]==key){
				ret=i;
				break;
			}
	}	
	return ret;
}


int main(void)
{
	int a[]={2,4,6,7,1,3,5,45,77,4,2,0,2};
	int x;
	int loc;
	printf("请输入一个数字："); 
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));//sizeof（a）给出整个数组所占据内容的大小（字节） 
	if(loc!=-1){
		printf("%d在%d个位置上\n",x,loc);
	} else{
		printf("%d不存在",x);	
	}
	return 0;
}
