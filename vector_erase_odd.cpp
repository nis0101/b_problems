#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
  vector<int> v = { 1,2,3,4,5,6};
  auto it = v.begin();

  while(it != v.end())
  {
    if(*it%2)
    {
      v.erase(it);
      it = v.begin();
    }
    else
      it++; 
  }
  it = v.begin();
  while(it != v.end())
  {
    cout<< *it <<"\t";
    it++;
  }
}
