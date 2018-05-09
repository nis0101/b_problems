#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int find_missing(const vector<int> &a,int N)
{
  int i = 0;
  int x = i ^ a[i];
  while(i < N)
  {
    x ^= i ^ a[i];
    i++;
  }
  cout<<"Missing is ::"<<x<<endl;
  return N;
}

int main(void)
{
  vector<int> a  = {0,1,2,3,4,5, 6,8,9};

  int missing =  find_missing(a,10);
}
