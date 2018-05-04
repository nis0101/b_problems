#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main(void)
{
 string arr[] = { "abbba", "ab","ba", "abcd", "adbc", "adbc", "aabddc"};
 unordered_map<string,int> s_map;
 
 for (auto val: arr)
  {
     sort(val.begin(),val.end());
     auto count = s_map[val];
     count++;
     s_map[val] = count;
  }
  for(auto item: s_map)
  {
    cout<<"Str :: "<< item.first <<" count ::" << item.second <<endl;
  }
}
