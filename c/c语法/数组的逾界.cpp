#include<stdio.h>
int main()
{
	int i;
	int j;
	int a[][3] = {{0},{1},{2}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);     //�õ��ľ���Ӧ�ǣ�000 
		}                              //                 100
	}                                 //                  200    ˵��{}�е����������㡾���еĸ�������������Զ���0. 
return 0;
}
