#include<iostream>
#include<algorithm>

using namespace std;
#define  DIM 5

int m_arr[DIM][DIM][DIM];

void print_array(int * arr, int size)
{
  for ( int i = 0; i<size ; i++)
  {
    cout << * (int *)(arr + i) <<"\t";
  }
  cout<<endl;
}

int main(void)
{
   int v = 0;
   for(int i = 0; i < DIM; i++)
   {
     for(int j = 0; j < DIM; j++)
     {
        
       for(int k = 0; k < DIM; k++)
       {
         m_arr[i][j][k] = v++;
       }
     }
   }
   print_array(&m_arr[0][0][0],DIM*DIM*DIM);
}
