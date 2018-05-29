#include<iostream>

using namespace std;


void swap_inplace(int &a, int &b)
{
   cout<<"Before swap a = " << a << " b = " <<b <<endl;
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;

   cout<<"After swap a = " << a << " b = " <<b <<endl;

}


int main(void)
{
  int a = -3, b = -4 ;
  swap_inplace(a,b);

  return 0;
}
