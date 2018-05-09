#include<iostream>
#include<vector>

using namespace std;

void fib_series(int n)
{
  vector<int> series;
  int a = 0, b = 1;
  int val = a+ b;
  series.push_back(val);
  while( val < n )
  {
    a = b; b = val;
    val = a + b ;
    series.push_back(val);
  }
  for(auto &x: series)
    cout<<x<<"\t" ;
  cout<<endl;
}

int main(void)
{
  fib_series(100);
}
