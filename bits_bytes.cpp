#include<iostream>
using namespace std;

//Taking usigned bit makes it easier.
template<typename T>
T count_bits(T n)
{
  T cnt = 0;
  T a = 0;
  T bits = sizeof(n) * 8;
  while(a < bits )
 {
   int tmp = 1 << a;
   //Print if bit is set
   if(tmp & n) 
     cout << "1"<<" ";
   else
     cout << "0"<<" ";
   //Count 1's only--duh
   if(tmp & n)
     cnt ++;
   a++;
 }
 cout<<endl;
 return cnt;
}

template<typename T>
T reverse_bits( T n)
{
  count_bits(n);
  T i = 0;
  T bits = sizeof(n)*8;
  T rnum = 0;
  while(i < bits)
  {
    T tmp = (n & (1 << i));
    //If tmp is set, set the rnum bit at bits -1 -i
    // to prevent roll over. 
    if(tmp)
      rnum |= (1 << (bits  - 1 - i));
    i++;
  }
  count_bits(rnum);
  cout << "The reversed num is "<< rnum << endl; 
  return rnum;
}

int main(void)
{
  cout<<"Size of unsigned int is :: " << sizeof(unsigned int)<<endl;
   uint8_t i = 1 << sizeof(uint8_t);
   uint8_t x = 1 << sizeof(i);
   if( i & x)
    cout<<"Higher order bit is set"<<endl;
  else 
    cout<<"Higher order bit is not set"<<endl;

  //cout<<"Number of bits in "<< 3 << "is:: "<<count_bits(3)<<endl;
  unsigned int n = 7;
  uint8_t t = 3;
  cout<<"Reverse bits of a number is ::" <<reverse_bits(t)<<endl;
}
