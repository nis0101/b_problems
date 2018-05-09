#include<iostream>
#include<vector>
#include<string.h>
#include<unordered_map>

using namespace std;

vector<string> routes(const vector<string> &r)
{
  vector<string> x;
  unordered_map<string,string> m;
  if(r.size()%2)
    return x;
  int i;
  for( i =0; i< r.size(); i+=2)
  {
    auto fit = m.find(r[i]);
    cout << "Insert :: " << r[i] << " " <<r[i+1]<<endl;
    m[r[i]] = r[i+1];
  }
  auto it = m.begin();
  cout<<m.size()<<endl;
  while(it != m.end())
  {
    x.push_back(it->first);
    x.push_back(it->second);
    cout<< it->first<<" " << it->second <<endl;
    it = m.find(it->second);
  }
   
  return x;
}
int main(void)
{
  vector<string> r = { "JFK", "LXA","SNA","RKJ", "LXA","SNA"};
  auto result = routes(r);
  for(auto &x: result)
  {
    cout << x<< " --> " ;
  }

}
