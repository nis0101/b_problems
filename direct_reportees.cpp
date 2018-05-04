#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;
void find(int e_id, unordered_map<int, vector<int> > e_map)
{
  vector<int> v = e_map[e_id];
  vector<int>::iterator it = v.begin();
  vector<int> r;
  r.push_back(e_id);
  while(it != v.end())
  {
    r.push_back(*it);
    vector<int> tmp = e_map[*it];
    vector<int>::iterator itmp = tmp.begin();
    while(itmp != tmp.end())
    {
      r.push_back(*itmp);
      itmp++;
    }
    it++;
  } 
  it = r.begin();
  while(it != r.end())
  {
    cout<<*it<<"\t";
    it++;
  }
  cout<<endl;
}
int main(void)
{
 unordered_map<int,vector<int> > e_map;
 vector<int> a = { 1,2};
 vector<int> b = { 6,7};
 vector<int> c = { 10,11};
 e_map[0] = a;
 e_map[1] = b;
 e_map[2] = c;

 find(0,e_map);
}

