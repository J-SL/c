#include<stdio.h>
int main()
{
	int i;
	int j;
	int a[][3] = {{0},{1},{2}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);     //得到的矩阵应是：000 
		}                              //                 100
	}                                 //                  200    说明{}中的列数不满足【】中的个数，会在其后自动补0. 
return 0;
}
