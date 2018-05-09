#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

bool cmp(const string &s, const string &s2)
{
  if(s.size() != s2.size())
     return false;
  if ((s.size() == 0) && 
      (s2.size() == 0))
     return true;
  for(int i = 0; i< s.size();i++) 
  {
    if( s[i] == s2[i])
      continue;
    else
      return false;
  }
  return true;
}
int main(void)
{

  string s = "ABC";
  string s2 = "abc";
  bool r = cmp(s,s2);
  cout<<cmp(s,s2)<<endl;
  s ="" , s2="a";
  cout<<cmp(s,s2)<<endl;
  s="abc",s2 = "abc";
  cout<<cmp(s,s2)<<endl;
}
