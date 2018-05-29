#include<iostream>
using namespace std;
bool is_pal(const string &s)
{
  int n = s.size();
  int mid = (0 + n)/2;
  int j = n-1;
  char sp = ' ';
  for(int i = 0 ; i < mid; i <= mid)
  {
    if(s[i] == sp)
       i++;
    if(s[j]  == sp)
       j--;
    if(s[i] != s[j])
      return false;
    else
    {
      i++;
      j--;
    }
  }
  return true;
}
int main(void)
{
  string s  = "a cd ef ed ca";
  string s1 = "a";
  cout<<"Is palindrome :: " << is_pal(s1)<<endl;
}
