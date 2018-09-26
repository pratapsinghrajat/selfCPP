#include<bits/stdc++.h>
using namespace std;


void selection(int arr[],int num)
{	 
	for(int i=0;i<num-1;i++)		//---------------- upto n-1 ------------//
	{								
	int k=i;					//---------- finding minimum element index number's one by one and storing in
									//------------ k which is then swapped with current element ------//
		for(int j=i+1;j<num;j++)
		{
			if(arr[j]<arr[k])		//-----comparision ---------------//
			k=j;
		}
		swap(arr[i],arr[k]);
	}
/*	cout<<"\n\nelements after sorting\n\n";
	for(int i=0;i<num;i++)
	cout<<arr[i]<<endl;*/
}


int main()
{
	int arr[]={9,8,7,5,10,12,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"elements before sorting\n\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
	selection(arr,n);
	cout<<"\n\nelements after sorting\n\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
	
}
