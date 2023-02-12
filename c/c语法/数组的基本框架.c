#include<stdio.h>
int main()
{
	const int number=10;
	int x;
	int count[number];
	int i;			
	
	for(i=0;i<number;i++){
		count[i]=0;
	}//初始化数组 
	scanf("%d",&x);
	while(x!=-1){
		if(x>=0 && x<=9){
			count[x]++;//count【x】++表示count【x】在数组中的个数加一 
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("%d:%d\n",i,count[i]); 
	}
	

return 0;
}
