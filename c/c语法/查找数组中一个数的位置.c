#include<stdio.h>

int search(int key,int a[],int length)//length���ɻ�ȱ 
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
	printf("������һ�����֣�"); 
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));//sizeof��a����������������ռ�����ݵĴ�С���ֽڣ� 
	if(loc!=-1){
		printf("%d��%d��λ����\n",x,loc);
	} else{
		printf("%d������",x);	
	}
	return 0;
}
