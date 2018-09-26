#include<bits/stdc++.h>
using namespace std;

	int top=-1;
	int size=5;
	int arr[100];
	
int push(int num)
{
	if(top>size)
	cout<<"overflow\n";
	else
	{
	top++;
	arr[top]=num;
	}
}
int pop()
{
	if(top<=-1)
	cout<<"underflow\n";
	else 
	{
		return arr[top];
		top--;
	}
}
int main()
{
	
	while(1)
	{
		cout<<"enter your choice	 1 to push	 &	 2 to pop 	&	 3 to exit \n";
	int choice;
	cin>>choice;
	
		if(choice==1)
		{
		int number;
		cout<<"enetr number to be pushed\n";
		cin>>number;
		push(number);
		
		}
		if(choice==2)
		{
		int r=pop();
		if(top>0)
		cout<<"%d\t"<<r<<"is poped out\n";
		
		}
		if(choice==3)
		exit(0);
	}
}
