#include<bits/stdc++.h>
using namespace std;

void iSort(int a[5])
{
	int i;
	for(int j=1;j<5;j++)
	{
	int k=a[j];
	i=j-1;
	while(i>=0 && a[i]>k)
	{
		a[i+1]=a[i];		//-------------------cram it ---------//
		i--;				//-------------------cram it ---------//
	}
	a[i+1]=k;				//-------------------cram it ---------//
	}
	
}
int main()
{
	int arr[5]={5,8,7,1,2};
	cout<<"unsorted array\n\n";
	for(int i=0;i<5;i++)
	cout<<arr[i];
	cout<<endl;
	iSort(arr);
	cout<<"sorted array\n\n";
	for(int i=0;i<5;i++)
	cout<<arr[i];
	
}
