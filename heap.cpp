#include<bits/stdc++.h>
using namespace std;

int capacity=20;
int heap[21];
int heap_size=0;

int getLeftChild(int i)
{
	return 2*i;
}
int getRightChild(int i)
{
	return 2*i+1;
}
int parent(int i)
{
	return i/2;
	
}
void swap1(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void InsertInHeap(int val)
{
	if(heap_size>=capacity)
	{
		cout<<"heap is full can't insert ";
		return;
	}
	heap_size++;
	heap[heap_size]=val;
	int curr=heap_size;
	while(curr!=1 && heap[curr]<heap[parent(curr)])
	{
		swap1(&heap[curr],&heap[parent(curr)]);
	curr=parent(curr);
	}
}

int getMin()
{
	return heap[1];
}

void MinHeapify(int i)
{
	
	int l=getLeftChild(i);
	int r=getRightChild(i);
	
	int minIndex=i;
	if(l<=heap_size && heap[l]<heap[i])
	minIndex=l;
	if(r<=heap_size && heap[r]<heap[minIndex])
	minIndex=r;
	if(minIndex!=i)
	{
		swap1(&heap[i],&heap[minIndex]);
		MinHeapify(minIndex);
	}
}
void ExtractMin()
{
	
}
void deleteMin()
{
	if(heap_size==1)
	{
		heap_size=0;
		return;
	}
	heap[1]=heap[heap_size];
	heap_size--;
	MinHeapify(1);
	
}
void HeapShort()
{
	while(heap_size>0)
	{
		int temp=heap[heap_size];
		heap[heap_size]=heap[1];
		heap[1]=temp;
		heap_size--;
		MinHeapify(1);
	}
}
void printheap()
{
	for(int i=1;i<=heap_size;i++)
	{
		cout<<heap[i]<<" ";
		
	}cout<<endl;
}
int main()
{
	InsertInHeap(7);
	InsertInHeap(4);
	InsertInHeap(2);
	InsertInHeap(3);
	InsertInHeap(1);
	printheap();
//	MinHeapify(10);

	
	//heap[1]=10;

	int size1=heap_size;
	HeapShort();
	for(int i=1;i<=size1;i++)
	{
		cout<<heap[i]<<" ";
	}
	return 0;
	
	
   
}
