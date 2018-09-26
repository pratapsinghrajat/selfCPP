#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int val;
	node *next;
}*head;
node *create(int num)
{
	node *p=new node ;
	//p=head;								//--------------------->>//
	p->val=num;
	p->next=NULL;
	return p;
}

void insertFront(int num)						//---------------------->>//
{
	node *p=create(num);				//-----------------creation required/////
	p->next=head;
	head=p;
}


void insertMid(node *pp,int pos,int num)
{
	node *p=create(num);int c=1;
	pp=head;
	while(pp->next !=NULL)
	{
		c++;
	node *temp=pp->next;
	if(c== pos)	
	{
		pp->next=p;
		p->next=temp;
	}
	pp=pp->next;
	}
}

void insertEnd(node *p,int num)
{
	node *pp=create(num);
	p=head;
	while(p->next !=NULL) 
	{
	p=p->next;	
	}
	if(p->next == NULL)
	{
	p->next=pp;
	pp->next=NULL;	
	}
}

void deleteFront(node *p)
{
	p=head;
	head=p->next;
	free(p);
}


void deleteMid(node *p,int pos)
{
	int c=1;node *m;
	p=head;
	
	m=p->next;
	

	while(m->next !=NULL)
	{
	 
	 ++c;	
	 if(c==pos)
	 {
	 	p->next=p->next->next;
	 	break;
	 }
	 else
	 {
	 	 p=p->next;
	     m=m->next;
	 }
	}
		free(m);
}

void deleteEnd(node *p)
{
	p=head;node *n;
	while(p->next->next != NULL)
	{
		p=p->next;
			
	}
	n=p->next;
	p->next=NULL;      /////------------>>last node's pointer is towards NULL--------///
	free(n);
}

void printing(node *p)
{
	p=head;
	while(p->next !=NULL)
	{		
		cout<<p->val<<"->";
		p=p->next;
	} 
	if(p->next == NULL)
	cout<<p->val;
}


int main()
{
	cout<<"the linked list is \n\n";
	node *n1,*n2,*n3,*n4,*n5,*n6,*pp,*ppp;				//---------------------->>must declared outside and pass as pp not *p//
	n1=create(1);
	n2=create(2);
	n3=create(3);
	n4=create(4);
	n5=create(5);
	n6=create(6);
	   										 //--------------------->>//
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	
	//n4->next=NULL;						//--------------------->>//
	head=n1;
	//cout<<n1->val<<"->"<<n2->val<<"->"<<n3->val<<"->"<<n4->val;
	
	cout<<"linked-list before\n\n";
	printing(n1);
	cout<<"\n\n";
	
	
	cout<<"enter choice   1   to insert 	2   to delete\n\n  ";
	int ch;
	cin>>ch;
	
	if(ch==1)
	{
	
	cout<<"enter value to be entered\n\n";
	int number;
	cin>>number;
	cout<<"enter place 'f' or 'm' or 'e'\n\n";
	char pos;
	cin>>pos;
	
	//cout<<"You entered "<<pos<<endl; 
	if(pos=='f')
	insertFront(number);
	if(pos=='m')
	{
	int position;
	cout<<"entery place the position \n\n";
	cin>>position;
	insertMid(pp,position,number);
	}
	if(pos=='e')
	insertEnd(ppp,number);
	}
	 									//------------------------>>//
	if(ch==2)
	{
	cout<<"deletion place 'f' or 'm' or 'e'\n\n";
	char pos;
	cin>>pos; 
	if(pos=='f')
	deleteFront(pp);
	if(pos=='m')
	{
	int position;
	cout<<"enter the position \n\n";
	cin>>position;
	deleteMid(pp,position);
	}	
	if(pos=='e')
	deleteEnd(ppp);
	} 
	
	
	printing(n1);
}


