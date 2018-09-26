#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],int n , int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	
	
	
	
	if(l<n   && arr[l]>arr[largest])
	largest = l;
	if(r<n   && arr[r]>arr[largest])
	largest = r;
	if(largest != i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}



void heapsort(int arr[],int n)
{
	for(int i= n/2 -1;i>=0;i--)		//-------------------for condition -----------//
	heapify(arr,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);	//----------------for condition //-----------//
		heapify(arr,i,0);
	}
}



void printArray(int arr[], int n)
{
	for (int i=0; i<n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}



int main()
{
	int arr[] = {9,8,7,6,10,11,5,0,77};
	int n = sizeof(arr)/sizeof(arr[0]);

	heapsort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
