#include<bits/stdc++.h>
using namespace std;
int *insertion(int arra[],int place,int element,int size)
{	

	int array1[size];
	int x = size-1;
	for(int i=0;i<=size;i++)
	{
		if(i==place)
		array1[i]=element;
		if(i<place)
		array1[i]=arra[i];
		if(i>place)
		array1[i]=arra[i-1];
	
	}
//	for(int k=0;k<=size;k++)
//	cout<<array1[k]<<"---"<<endl;
	return array1;
}
int main()
{
	
	int size,array[100],pla,ele;
	cout<<"enter size of array\n";
	cin>>size;
	cout<<"enter elements of array\n";
	for(int i=0;i<size;i++)
	cin>>array[i];
	cout<<"enter index u wanna enter an element\n";
	cin>>pla;
	printf("enter elements at index %d in an array\n",pla);
	cin>>ele;
	int *arrr = insertion(array,pla,ele,size);
	cout<<"final array is \n";
	for(int i=0;i<size+1;i++)
	cout<<*(arrr+i)<<endl;
	return 0;
}
