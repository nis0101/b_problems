#include<iostream>
#include<vector>
#include<map>

using namespace std;
void find_pairs(const vector<string> &v)
{
  map<string,int> m;
  vector<string> out;
  for(auto &x: v)
  {
    m[x] = m[x]+1;
  }

  for(auto &x: m)
  {
    string s = x.first;
    string o_str= "" ;
    if(s.find("sock") != string::npos)
    {
      int cnt = x.second;
      if(cnt == 1)
      {
        o_str =  to_string(cnt-1) + "|" + x.first;
        out.push_back(o_str);
      }
      else if(cnt % 2)
      {
        o_str =  to_string(cnt/2) + "|" + x.first;
        out.push_back(o_str);
        o_str =  to_string((cnt %  2)-1) + "|" + x.first;
        out.push_back(o_str);
      }
      else
      {
        o_str =  to_string(cnt / 2) + "|" + x.first;
        out.push_back(o_str);
      }
    }
    else
    {
       o_str = to_string(x.second)+"|"+x.first;
       out.push_back(o_str);
    }
  }
  for(auto &x: out)
     cout<<x<<endl;
}
int main(void)
{
  vector<string> v = {
  "white shirt",
  "white shirt",
  "polka dot sock",
  "polka dot sock",
  "red sock",
  "red sock",
  "polka dot sock",
  "polka dot sock",
  "green belt",
  "green belt"
  };
  find_pairs(v);
}
