#include<iostream>

using namespace std;

typedef class singleton
{
  public:
  static singleton&  getinstance();
  
  void print()
  {
    cout<<"Singleton print "<<endl;
  }

  private:
   singleton(){}
  public:
   singleton& operator= (const singleton&rhs) = delete;
   singleton(const singleton& rhs) = delete;
}singleton;


singleton& singleton::getinstance()
{
  static singleton instance;
  return instance;
}
int main(void)
{
   singleton::getinstance().print();
}
