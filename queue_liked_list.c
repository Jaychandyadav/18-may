// queue in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *f,*r;
struct node *n;

void enqueue(int x)
{
	n = (struct node*)malloc(sizeof(struct node));
	n->data=x;
	n->next=NULL;
	
	if(r==NULL&&f==NULL)
	{
		f=r=n;
	}
	
	else
	{
		r->next=n;
		r=r->next;
	}
}

void dequeue()
{
	int x = -1;
	struct node *p;
	if(f==NULL&&r==NULL)
	{
		printf("Q is Empty");
	}
	
	else
	{
		p=f;
		f=f->next;
		x = p->data;
		free(p);
		p = NULL;
	}
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	enqueue(100);
	
	return 0;
}
