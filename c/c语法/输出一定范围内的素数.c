#include<stdio.h>
int main()
{
	int maxnumber;
	printf("������һ����Χ��0-");
	scanf("%d",&maxnumber);
	int isprime[maxnumber];
	int i;
	int x;
	for(i=0;i<maxnumber;i++){
		isprime[i]=1;	
	}
	for(x=2;x<maxnumber;x++){
		if(isprime){                                       //isprimeΪ1��if��1����ʾĬ��ִ�С� 
			for(i=2;i*x<maxnumber;i++){
				isprime[i*x]=0;
			}                                               //���������forʱ��2�ı����Ѿ��������и�0�����Żص�ǰ���for��3�ı�����0���������ơ� 
		}
	}
	for(x=2;x<maxnumber;x++){
		if(isprime[x]){                                     //��ʱֻ�����û�и�0������Ҳ������������Ϊif��0������ִ�С� 
			printf("%d\t",x);
		}
	}
	return 0;
}
