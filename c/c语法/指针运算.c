#include <stdio.h> 
  
int main() 
{ 
int cnt = 10; 
char *p = "welcome"; 
while(*p++) 
{ 
cnt++ ; 
} 
printf("%d/n", cnt); 
} 

//*p++����ȡ��p��ָ�ĵ�ַ����˳���p�Ƶ���һ��λ�� 
