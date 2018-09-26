#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s)
{
	int k=s.length(),m=0,j,count=0;char s1[]="\0";string ss=s;
	for(int i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(s[i]==s[j])
			{
				count++;
				m++;
			}
		}
		if(count%2!=0)
		s1[m]=s1[m]+s[j];	
		count=0;	
	}
	if(s1=='\0')
	{
	ss="Empty String";
	return ss;
	}
	else
    return s1;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

