#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	//int exit=0;
	
	scanf("%d",&x);
	for(one=1;one<x*10;one++){
		for(two=1;two<x*5;two++){
			for(five=1;five<x*2;five++){
				if(one+two*2+five*5==x*10){
					printf("������%d��1�Ǻ�%d��2�Ǻ�%d��5�ǵõ�%dԪ",one,two,five,x);
					//��ֻ��Ҫһ�����������������break������ֻ�����������forѭ��,������һ�����exit 
					//exit=1;
					//break; 
					///Ҳ������goto������Ƕ��ѭ������һ�����out
					///goto out; 
				}
			}
			//if(exit) break;   //exit��û�и�ֵʱĬ��Ϊ��  exit==1 
		}
		//if(exit) break;   
	}
	///out:

return 0;
}
