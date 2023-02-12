#include<stdio.h>
int main()
{
	int maxnumber;
	printf("请输入一个范围：0-");
	scanf("%d",&maxnumber);
	int isprime[maxnumber];
	int i;
	int x;
	for(i=0;i<maxnumber;i++){
		isprime[i]=1;	
	}
	for(x=2;x<maxnumber;x++){
		if(isprime){                                       //isprime为1，if（1）表示默认执行。 
			for(i=2;i*x<maxnumber;i++){
				isprime[i*x]=0;
			}                                               //当跳出这个for时，2的倍数已经在数组中赋0，接着回到前面的for对3的倍数赋0，依次类推。 
		}
	}
	for(x=2;x<maxnumber;x++){
		if(isprime[x]){                                     //此时只会输出没有赋0的数，也就是素数，因为if（0）不会执行。 
			printf("%d\t",x);
		}
	}
	return 0;
}
