#include<iostream>

using namespace std;

typedef enum
{
  tiger_t =0,
  dog_t,
  cat_t
}animal_type;
typedef class animal
{
  public:
   virtual void print() = 0;
   static animal * create(animal_type type);

}animal;


typedef class tiger:public animal
{
  public:
   virtual void print()
   {
     cout<<"Tiger"<<endl;
   }
}tiger;

typedef class cat:public animal
{
  public:
   virtual void print()
   {
     cout<<"cat"<<endl;
   }
}cat;

animal* animal::create(animal_type type)
{
  if(type == tiger_t)
   return new tiger();
  else if (type == cat_t)
   return new cat();
  else
   return NULL;
}

typedef class zoo
{
  public:

   zoo(animal_type type)
   {
     a = animal::create(type);
   }
   ~zoo()
   {
     if(a)
     {
        delete[] a;
        a = NULL;
     }
   }
   void print()
   {
     a->print();
   }
  private:
  animal * a;
}zoo;

int main(void)
{
  zoo z(tiger_t);
  z.print();
}
