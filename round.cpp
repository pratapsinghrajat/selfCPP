#include<bits/stdc++.h>
using namespace std;
int main()
{
	int limit;int arr[100];
	cout<<"enter the limit\n";
	cin>>limit;
	int round;
	cout<<"enter the round\n";
	cin>>round;
	int temp=0;
	cout<<"enter array elements\n";
	for(int i=0;i<limit;i++)
	cin>>arr[i];
	
	//cout<<"--"<<arr[limit-1];
	for(int x=0;x<round;x++)
	{
		temp=arr[limit-1];
		for(int j=limit-1;j>=0;j--)
		{
		arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(int i=0;i<limit;i++)
	cout<<"--"<<arr[i]<<"\n";
}
