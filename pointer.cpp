#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[5]={10,20,30,40,50};
	int *p;p=arr1;
	for(int i =0;i<5;i++)
	{
		cout<<*(p+i);
	}
}
