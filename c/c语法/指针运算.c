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

//*p++是先取出p所指的地址，再顺便把p移到下一个位置 
