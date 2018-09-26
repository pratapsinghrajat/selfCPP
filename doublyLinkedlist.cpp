#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
	node *prev;
}*head;
node *create(int num)
{
	node *p= new node;
	p->val=num;
	p->next=NULL;
	p->val=NULL;
	return p;
}
void insertBegining(int num)
{
	node *p=create(num);
	p->next=head;
	p->prev=NULL;
	head=p;	
}
void insertMid(int num,int pos)
{
	node *pp=create(num),*p;
	int c=1;
	while(p->next !=NULL)
	{
		c++;
		node *p1=p; 
		
		if(c==pos)
	{
		p1->next=pp;
		pp->prev=p1;
		pp->next=p;
		p->prev=pp;	
	}
	else
	p=p->next;
	}
	
}
void insertEnd(int num)
{
	node *pp=create(num),*p;
	p=head;
	while(p->next != NULL)	
	{
		p=p->next;
	}
	if(p->next==NULL)
	{
	p->next=pp;
	pp->prev=p;
	pp->next=NULL;
	}
}
