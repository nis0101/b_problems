#include<iostream>

using namespace std;

int cost[3][3] = { {1,2,3} , {4, 8, 2} , {1,5,3} };
/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
 
int find_cost(int m, int n)
{
  if(m < 0 || n < 0 )
    return INT32_MAX;

  if(m==0 && n==0)
    return cost[m][n];
  else
    return cost[m][n] + min(find_cost(m-1,n-1), find_cost(m,n-1), find_cost(m-1,n));

}

int main(void)
{
  cout<<" Min cost from(0,0) - > (2,2) "<<find_cost(2,2)<<endl;
  return 0;
}
