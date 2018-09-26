#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int palindrome(int n1)
{
    int digit,rev=0,n=n1;
    while(n !=0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev==n1)
    return 1;
    else
    return 0;
    
}

int prime(int nn)
{
    int flag=0;
    for(int i = 2; i <= nn/2; ++i)
  {
      if(nn%i == 0)
      {
          flag = 1;
          break;
      }
  }
  if(flag==1)
  return 1;
  else
  return 0;
    
}

int main()
{
    int n;int result1,result2,count=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
    result1=prime(i);
    if(result1==1)
    {
        result2=palindrome(i);
        if(result2==1)
        count++;
    }
    }
    cout<<count;
    return 0;
}

