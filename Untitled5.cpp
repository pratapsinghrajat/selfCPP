#include<iostream>
using namespace std;

int capacity=20;
int heap[20];
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
void swap1(int *a ,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void insertInHeap(int val)
{
if(heap_size >= capacity)
{
	cout<<"heap is full cant insert";
	return;
}
heap_size++;
heap[heap_size]=val;
int curr=heap_size;
while(curr!=1&&heap[curr]<heap[parent(curr)])
{
	swap1(&heap[curr],&heap[parent(curr)]);
	curr=parent(curr);
}
	
}
void printHeap(int i )
{
	for(i=1;i<heap_size;i++)
	cout<<"heap[i]"<<endl;
}
/*void minHeapyFy(int i)
{
	int l,r;
	l=left(i);
	r=right(i);
	if(heap[i]<heap[l]&&heap[i]>heap[r])
	return;
	if(heap[l]>heap[r])
	{
		swap(heap[i],heap[l]);
		minHeapyFy(heap,l);
	}
	else
	{
		swap1(heap[i],heap[r]);
		minHeapyFy(heap,r);
	}	
	}
}*/
void MinHeapify(int i)
{
	int l=getLeftChild(i);
	int r=getRightChild(i);
	int minIndex=i;
	if(l<=heap_size && heap[l<heap[i]])
	minIndex=l;
	if(r<=heap_size && heap[r]<heap[minIndex])
	minIndex=r;
	if(minIndex!=i)
	{
		swap1(&heap[i],&heap[minIndex]);
		Heapyfy(minIndex);
	}
}
void heapSort()
{
	while(heap_size>0)
	{
		int temp = heap[heap_size];
		heap[heap_size] = heap[1];
		heap[1] = temp;
		heap_size--;
		MinHeapify(1);
	}
}


int main()
{
	heap_size=0;
	insertInHeap(7);
	insertInHeap(4);
	insertInHeap(2);
	insertInHeap(3);
	insertInHeap(1);
	heap[1]=10;
	printHeap();
	MinHeapify();
	int size
	
}
