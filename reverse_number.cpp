#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main(void)
{
  stack<int> s;
  uint64_t x = 00;
  bool check_z = false;
  while(x >= 0)
  {
    int num = x % 10; 
    s.push(num);
    x = x / 10;
    if(x == 0 && check_z)
     break;
    else
    {
      check_z = true;
    }
  }
  int powc = 0, n = 0;
  while(!s.empty())
  {
    n += s.top() * pow(10,powc);
    s.pop();
    powc++;
  }
  cout<<"REverse num ::" << n<<endl;
}
