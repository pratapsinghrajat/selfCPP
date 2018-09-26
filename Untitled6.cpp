#include<bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	node *next ;
}*top;
node *creation(int val)
{
	node *p= new node;
	p->value =val;
	p->next=NULL;
	return p;
}
void push(int val)
{
	node *n= new node;				////----------creation of new node required //
	n->value=val; 					///------------value assignement required //
	if(top== NULL)
	n->next=NULL;
	else 
	n->next=top;
//	cout<<n->value;
	top=n;
	
}
void pop(node *p)
{
	if(top==NULL)
	cout<<"empty stack\n";
	else
	{
		p=top;
		top=p->next;
		free(p);
	}
}

void display(node *p)
{
	p=top;
	if(top==NULL)
	cout<<"empty stack\n";
	else
	{
		while(p->next != NULL)
		{
			cout<<p->value<<"->";
			p=p->next;
		}
		cout<<p->value;
	}
}


int main()
{
	cout<<"stack is \n\n";
	node *n1,*n2,*n3,*n4,*p;int val;
	n1=creation(1);
	n2=creation(2);
	n3=creation(3);
	n4=creation(4);
	top=n1;
	n1->next=n2;
	n2->next=n3;
	n2->next=n3;
	n3->next=n4;
	cout<<"1 --------  push\n\n";
	cout<<"2 --------  pop\n\n";
	cout<<"3 --------  display\n\n";
	cout<<"enter choices 1	or 	2 	or	3\n\n";
	int ch;
	cin>>ch;
	if(ch==1)
	{
	cout<<"pushed value \n\n";
	cin>>val;
	push(val);
	display(p);
	}
	if(ch==2)
	{
	pop(p);
	display(p);
	}
	if(ch==3)
	{
	display(p);
	}
}
