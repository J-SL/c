#include<stdio.h>
int main()
{
	int x;
	scanf("%d,&x");
	int i;
	int t=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			t=0;
			break;
		}
	} 
	if(t=0){
		printf("������\n");
	}else{
		printf("��������\n");
	}
return 0;
}
