// strcmp:比较两个字符串，相同则比较后一个，直到比较的不同，若第一个字符串的相比较的字符的 ASCII 码大则输出1，小则输出-1，相同输出0 


#include<stdio.h>
//#include<string.h>

int mycmp(const char*s1,const char*s2)
{
	int idx=0;
	while(s1[idx]==s2[idx]&&s1[idx]!='\0'){     //while(*s1==*s2&&*s1!='\0'){ 
		idx++;                                  //		s1++;                        指针s1表示数组s1【0】的地址，指针通过++运算向后移动一个sizeofs1【0】     
	}                                           //      s2++;
	return s1[idx]-s2[idx];                     //}
}                                               //return *s1-*s2;                    指针做法。  

int main(int argc,char const *argv[])
{
	char s1[]="aBC";
	char s2[]="Abc";
	//printf("%d\n",strcmp(s1,s2));   //输出结果为1(有的输出是以ASCII码相减，为32），可见当第一个a与A不同时，a与A比较后就没继续比较B和b了。 
	//printf("%d\n",'a'-'A');        //ASCII码相减 ，结果为32。 
	printf("%d\n",mycmp(s1,s2));

return 0;
}
