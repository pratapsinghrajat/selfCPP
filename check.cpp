#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
    int	ans=0;
	for(int i=0;i<s.length();i++ )
     {
	     bool isNew=true;
	     for(int j=0;j<=i-1;j++ )
             {
 	            if(s[i]==s[j])
 	              	isNew=false;
 	         }
 	              if(isNew==true)
 	              ans++;
 	          
 	              
       }
       cout<<ans;
       return 0;
}
