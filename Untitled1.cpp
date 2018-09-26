#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int val;
	node *next;
}*head;
node *createss(int num)
{
	node *p=new node ;
	p=head;
	p->val=num;
	p->next=NULL;
	return p;
}
int main()
{
	cout<<"the linked list is \n";
	node *n1,*n2,*n3,*n4;
	n1=createss(1);
	n2=createss(2);
	n3=createss(3);
	n4=createss(4);
	   										 //--------------------->>//
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	//n4->next=NULL;						//--------------------->>//
	head=n1;
	cout<<n1->val<<"->"<<n2->val<<"->"<<n3->val<<"->"<<n4->val;
	
}
