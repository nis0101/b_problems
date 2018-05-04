#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

template<typename T> void add(T a[],int size, int sum)
{
  unordered_map<T,T> m;
  for (int i  =0;i < size; i++)
  {
     m[a[i]] = a[i];
  }
  
  for (int i  =0;i < size; i++)
  {
    int diff = sum - a[i];
    auto got = m.find(diff);
    if(got != m.end())
    {
     cout<<a[i]<<" " << diff<<endl;
    }
  }

}

int main(void)
{
  float a[] = { 0,1.0f,2.2f,3,4,5,6,7,8,9};
  add(a,10,6);
}
