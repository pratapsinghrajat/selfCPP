#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val ;
	node *next;
	
}*top;

void push(int num)
{
	node *p=new node;
	p->val=num;
	if(top==NULL)
	p->next=NULL;
	else
	p->next=top;
	top=p;
	printf("%d is added into stack\n",num);
	
}

void pop()
{
	node *p;
	if(top==NULL)
	cout<<"stack is empty\n";
	else
	{
		p=top;
		top=p->next;
		free(p);
	}
	
}


void printing()
{
	
	
	if(top==NULL)
	cout<<"stack is empty\n";
	node *p=top;
	while(p->next !=NULL)
	{	
			
		cout<<p->val<<"->";
		p=p->next;
	} 
	if(p->next == NULL)
	cout<<p->val;
	printf("->NULL\n");
	
}


int main()
{
	cout<<"stack usink linedlist is\n";
	
	int val;
	while(1)
	{
		cout<<"enter choice   1   to push 	2   to pop 		3 to print 		4 to exit\n\n  ";
	int ch;
	cin>>ch;
		switch(ch)
		{
		case 1:	cout<<"enter value to be pushed\n";
				cin>>val;
				push(val);
				break;
		case 2:	pop();	break;
		case 3:	printing();	break;
		case 4:	exit(0);
		default:
		cout<<"wrong entry \n\n";
		}
	}
	return 0;
}
