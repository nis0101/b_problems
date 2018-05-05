#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int a, int b)
{
   if(a < b)
     return false;
   else
     return true;
}

int main(void)
{
  int arr[] = { 8,9,2,1,3,4};
  vector<int> v;
  for(int i =0; i <sizeof(arr)/sizeof(int) ; i++)
   v.push_back(arr[i]);
  
  sort(v.begin(),v.end(),cmp);

  int count = 0;
  int p = 1;
  vector<int>::iterator it = v.begin();
  while(it != v.end())
  {
    p *= *it;
    it++;
    count++;
    if(3 == count)
     break;
  }
  cout<<"Max product is ::" << p <<endl;
}
