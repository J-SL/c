#include<stdio.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;//rand()可以生成一个随机数，用任意一个随机数取余100，可以留下区间（1，100）中的数 
	int count=0;
	int a=0;
	printf("我已经想好了一个1到100之间的数。");
	do{
		printf("猜猜这个数：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你的数猜大了");
			
		}else if(a<number){
			printf("你猜的数小了");
			 
		}
	}while (a!=number);
	printf("太好了，你用了%d次就猜到了答案\n",count);
return 0;
}
