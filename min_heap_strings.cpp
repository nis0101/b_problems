#include<iostream>
#include<string.h>
#include<algorithm>
#include<queue>
#include<functional>
#include<vector>
using namespace std;

int cost  =0;
string add_string(const string &str1, const string &str2)
{
  string str = str1 + str2;
  cout<<str1 << " " << str2 << str.size()<<endl;
  cost += str.size();
  return str;
}

int main(void)
{
  vector<string>  vs = { "abc","def","gh"};

  priority_queue<string>  pq(vs.begin(),vs.end());
  string s1 = pq.top();
  pq.pop();
  string s2 = pq.top();
  pq.pop();
  s1 = add_string(s1,s2);
  s2 = pq.top();
  pq.pop();
  s1 = add_string(s1,s2);
  cout<<"STring added :: "<< s1 << " cost is :: "<<cost<<endl;
}

