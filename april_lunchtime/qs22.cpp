
#include <bits/stdc++.h>
using namespace std;
int main() {
  
  int test;
  cin>>test;
  while(test--)
  {
      int a,b;
      cin>>a>>b;
      vector<char> s,s2;
      if(a%2!=0 && b%2!=0 ||(a==1||b==1))
       {
           cout<<"-1"<<endl;
           continue;
       }
          if(a%2==0)
          {
              for(int i=0;i<a/2;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b;i++)
              {
                  s.push_back('b');
              }
              for(int i=0;i<a/2;i++)
              {
                  s.push_back('a');
              }
          }
            else
            {
              for(int i=0;i<b/2;i++)
              {
                  s.push_back('b');
              }
              for(int i=0;i<a;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b/2;i++)
              {
                  s.push_back('b');
              }
          }
          
          if(a%2==0)
          {
              for(int i=0;i<a/2;i++)
              {
                  if(i==0)
                   {
                       s2.push_back('b');
                       s2.push_back('a');
                   }
                  else
                    s2.push_back('a');
              }
              for(int i=0;i<b-2;i++)
              {
                  s2.push_back('b');
              }
              for(int i=0;i<b/2;i++)
              {
                  if(i==a/2-1)
                   {
                       s2.push_back('a');
                       s2.push_back('b');
                   }
                  else
                    s2.push_back('a');
              }
          }
            else
            {
              for(int i=0;i<b/2;i++)
              {
                  if(i==0)
                   {
                       s2.push_back('a');
                       s2.push_back('b');
                   }
                  else
                    s2.push_back('b');
              }
              for(int i=0;i<a-2;i++)
              {
                  s.push_back('a');
              }
              for(int i=0;i<b/2;i++)
              {
                  if(i==a/2-1)
                   {
                     s2.push_back('b');
                    s2.push_back('a');
                   }
                  else
                    s2.push_back('a');
              }
          }
      for(int i=0;i<a+b;i++)	cout<<s[i];
       
      cout<<endl; 
      for(int i=0;i<a+b;i++)	cout<<s2[i];
       
      cout<<endl;
  }
  return 0;
}
