#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	map<char,int> m;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.length();i++ )
	{
		if(m.find(s[i])==m.end())
		{
			m[s[i]]=i;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

