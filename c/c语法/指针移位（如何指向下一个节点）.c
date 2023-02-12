#include<stdio.h>


typedef int Data;
struct _Node
{
	Data data;
	struct _Node* next;
};

int main()
{
	struct _Node n1 = { 1 }, n2 = { 2 }, n3 = { 3 };        //n1,n2,n3是定义的结构体变量，相当于节点。 
	n1.next = &n2;
	n2.next = &n3;

	struct _Node* p = &n1;	
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", p->data);
		p = p->next;                      //p->next相当于n1.next，也就是&n2，p指针从n1节点移至n2 
	}
	

	return 0;
}
