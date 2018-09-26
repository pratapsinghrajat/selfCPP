#include<iostream>
using namespace std;
#define st_size 50
int st[st_size];
int top=-1;
void push(int val)
{
	if(top==st_size-1)
	{
		cout<<"overflow"<<endl;
		return;
	}
	top++;
	st[top]=val;
}
int pop(int val)
{
	if(top==-1)
	{
		cout<<"underflow"<<endl;
	}
	top--;
	return st[top+1];
}
void traverse()
{
	for(int i=0;i<=top;i++)
	{
		cout<<st[top]<<" ";
		cout<<endl;
	}
}
int main()
{
push(2);
push(2);
push(2);
traverse();
cout<<endl;
pop(2);
traverse();
return 0;
}
