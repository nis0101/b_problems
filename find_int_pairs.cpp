#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

void print_pairs(const vector<int> &a,int sum)
{
  auto it = a.begin();
  map<int,int> m;
  while(it != a.end())
  {
    int x = sum - *it;
    auto f1 = m.find(x);
    auto f2 = m.find(*it);
    if ( (f1 == m.end()) && ( f2 == m.end()))
      m[*it] = x;
    it++;
  }
  auto itm = m.begin();
  while(itm != m.end())
  {
    int x = (*itm).first;
    int y = (*itm).second;
    cout <<x << " " << y<<endl; 
    itm++;
  }
}
int main(void)
{
  vector<int> a = { 3,7,2,5,6,4,8};
  print_pairs(a,10);
}
