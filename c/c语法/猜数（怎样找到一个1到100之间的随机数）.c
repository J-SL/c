#include<stdio.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;//rand()��������һ���������������һ�������ȡ��100�������������䣨1��100���е��� 
	int count=0;
	int a=0;
	printf("���Ѿ������һ��1��100֮�������");
	do{
		printf("�²��������");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("������´���");
			
		}else if(a<number){
			printf("��µ���С��");
			 
		}
	}while (a!=number);
	printf("̫���ˣ�������%d�ξͲµ��˴�\n",count);
return 0;
}
