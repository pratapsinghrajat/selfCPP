#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,ans;
	stack<char> st;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		st.push(s[i]);
		
	}
	while(!st.empty())
		{
			char c= st.top();
			st.pop();
			ans= ans +c;
		}
		cout<<"reversed string:"<<ans<<endl;
		return 0;
}
