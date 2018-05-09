#include<iostream>
#include<vector>
#include<memory>

using namespace std;

typedef class Data
{
  private:
     int va;
  public:
     int getVal()
     {
       return va;
     }
     void setVal(int data)
    {
      va = data;
    }
    Data(int val)
    {
      va = val;
    }

}Data;

int main(void)
{
  shared_ptr<Data > p(new Data(10));
  shared_ptr<Data> p2(p);
  weak_ptr<Data> wp(p);
  cout<<p->getVal()<<endl;
  cout<<p.use_count()<<endl;
  p.reset();

  cout<<p.use_count()<<endl;
  cout<<p2.use_count()<<endl;
  cout<<wp.use_count()<<endl;
  cout<<p.use_count()<<endl;
}
