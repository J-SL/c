// strcmp:�Ƚ������ַ�������ͬ��ȽϺ�һ����ֱ���ȽϵĲ�ͬ������һ���ַ�������Ƚϵ��ַ��� ASCII ��������1��С�����-1����ͬ���0 


#include<stdio.h>
//#include<string.h>

int mycmp(const char*s1,const char*s2)
{
	int idx=0;
	while(s1[idx]==s2[idx]&&s1[idx]!='\0'){     //while(*s1==*s2&&*s1!='\0'){ 
		idx++;                                  //		s1++;                        ָ��s1��ʾ����s1��0���ĵ�ַ��ָ��ͨ��++��������ƶ�һ��sizeofs1��0��     
	}                                           //      s2++;
	return s1[idx]-s2[idx];                     //}
}                                               //return *s1-*s2;                    ָ��������  

int main(int argc,char const *argv[])
{
	char s1[]="aBC";
	char s2[]="Abc";
	//printf("%d\n",strcmp(s1,s2));   //������Ϊ1(�е��������ASCII�������Ϊ32�����ɼ�����һ��a��A��ͬʱ��a��A�ȽϺ��û�����Ƚ�B��b�ˡ� 
	//printf("%d\n",'a'-'A');        //ASCII����� �����Ϊ32�� 
	printf("%d\n",mycmp(s1,s2));

return 0;
}
