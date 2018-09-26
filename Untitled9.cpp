#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int l , int m , int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	
	
	
	int L[n1];
	int R[n2];
	
	
	
	for(int i=0;i<n1;i++)	//initialisation i =0 --------//
	L[i]=arr[l+i];			//-------------(l+p) not p---------//
	
	for(int j=0;j<n2;j++)	//initialisation i =0 --------//
	R[j]=arr[m+1+j];		//-------------(m+x+1) not x---------//


	
	 i=0;
	 j=0;
	 k=l;				//---------- every opration to store at k -----------------//
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];		
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	
	
	
	while(i<n1)
	{
		arr[k]=L[i];
		k++;
		i++;
	}	
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}


int mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}


int main()
{
	int arr[]={12, 11, 13, 5, 6, 7};
	int r=sizeof(arr)/sizeof(arr[0]);
	cout<<"given array\n\n";
	printArray(arr,r);
	
	mergesort(arr,0,r-1);
	cout<<"sorted array\n\n";
	printArray(arr,r);
	
}

