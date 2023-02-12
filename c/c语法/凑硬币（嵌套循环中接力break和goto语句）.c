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
					printf("可以用%d个1角和%d个2角和%d个5角得到%d元",one,two,five,x);
					//若只想要一个结果，可以在这里break，但是只会跳出最近的for循环,可以设一个标记exit 
					//exit=1;
					//break; 
					///也可以用goto来跳出嵌套循环，设一个标记out
					///goto out; 
				}
			}
			//if(exit) break;   //exit在没有赋值时默认为：  exit==1 
		}
		//if(exit) break;   
	}
	///out:

return 0;
}
