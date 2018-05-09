#include<iostream>
#include<map>
#include<vector>

using namespace std;

vector<string> find_run(const string &s)
{
  map<char,int> m;
  vector<string> ret;
  for(auto &x: s)
  {
    m[x] = m[x] + 1;
  }
  int max = 0;
  string r = "";
  for(auto &x: m)
  {
    if(x.second > max)
    {
      max = x.second;
      r = x.first;
    }
  }
  while(max > 0 )
  {
    ret.push_back(r);
    max --;
  }
  return ret;
}

int main(void)
{
  string s = "aabbcc";
  cout << "Input a run length string" <<endl;
  cin >> s;
  vector<string> r  = find_run(s);
  for(auto &x: r)
     cout<<x<<" ";
}
