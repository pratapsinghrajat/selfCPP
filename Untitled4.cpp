#include<bits/stdc++.h>				//////---------------HASHING---------////////
using namespace std;

int main()
{
	int s[4]={2,4,9,1};
	map<int,int> m;
	for(int j=0;j<4;j++ )
	{
		m[s[j]]=1;
	}
	
	for(int i=0;i<4;i++ )
	{
		if((9%s[i])==0 && s[i] != (9/s[i])&& m.find(9/s[i]) != m.end())
		{
		cout<<"present pair is \n";
		cout<<s[i]<<"\t"<<9/s[i];
		break;
		}
		
	}
	
	return 0;
}

