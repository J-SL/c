#include<stdio.h>


typedef int Data;
struct _Node
{
	Data data;
	struct _Node* next;
};

int main()
{
	struct _Node n1 = { 1 }, n2 = { 2 }, n3 = { 3 };        //n1,n2,n3�Ƕ���Ľṹ��������൱�ڽڵ㡣 
	n1.next = &n2;
	n2.next = &n3;

	struct _Node* p = &n1;	
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", p->data);
		p = p->next;                      //p->next�൱��n1.next��Ҳ����&n2��pָ���n1�ڵ�����n2 
	}
	

	return 0;
}
