#include<bits/stdc++.h>
using namespace std;
#define size 50

int arr[size];
int top=-1;
	

void push(int val)
{
	if(top==size-1)
	{
		cout<<"overflow\n\n";
		return;
	}
	top++;
	arr[top]=val;
}

int pop()
{

	if(top==-1)
	cout<<"underflow\n\n";
	else
	{
		int n;
		top--;
		n=arr[top];	return n;
	}

}


void traverse()
{
	for(int i=0;i<=top;i++)
	{
		cout<<arr[i]<<"\n\n";
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	traverse();
	pop();
	cout<<"after POP opration\n\n";
	traverse();
	return 0;
}
