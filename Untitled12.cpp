#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)  //-----------for condition -----------//
		if(arr[j]<arr[j+1])
		swap(arr[j],arr[j+1]);
	}
	cout<<"after sorting\n\n";
	for(int k=0;k<n;k++)
	cout<<arr[k]<<endl;
}

int main()
{
	int arr[]={44,55,88,11,22,99};
	cout<<"before sorting \n\n";
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<n;i++)
	cout<<arr[i]<<endl;
	bubble(arr,n);
}
