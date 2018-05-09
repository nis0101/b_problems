#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

void print_offset(string s)
{
  vector<int> zero, one;
  int size = s.size();
  int tracker = -1;

  for(int i =0;i<size;i++)
  {
    char c  = s[i];
    string tmp(1,c);
    int num = atoi(tmp.c_str());
    if(tracker != num)
    {
      tracker = num;
      zero.push_back(i);
    }
  }
  for(auto &x: zero)
     cout<<x<<" ";
}
int main(void)
{
  string s = "0001001101";
  print_offset(s);
}
