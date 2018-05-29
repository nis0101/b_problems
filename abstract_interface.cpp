#include<iostream>

using namespace std;

typedef class abstract
{
  public:
  virtual void print(void) = 0;
}abstract;

typedef class abstract_d: public abstract
{
  public:
   void print(void)
   {
     cout << "This is abstract derived " << endl;
   }
}abstract_d;

int main(void)
{
  abstract_d d;
  d.print();
}
