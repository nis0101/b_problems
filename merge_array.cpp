#include<iostream>

using namespace std;

void merge_array(int a[],int a_s,int b[], int b_s)
{
  int i = 0, j = 0, c =0;
  int * tmp = (int *)malloc(sizeof(int)*(a_s + b_s));
  while( (i < a_s) && (j < b_s))
  {
    if(a[i] <=b[j])
     tmp[c++] = a[i++];
   else
     tmp[c++] = b[j++];
       
  }

  for(i = i ; i < a_s; i++)
     tmp[c++] = a[i];
  
  for(i = j ; i < b_s; i++)
     tmp[c++] = b[i];

  for(i = 0; i < (a_s + b_s); i++)
    cout << tmp[i] << " ";

  free(tmp); 
}

int main(void)
{
  int a[] = { 1,3,5,7,9 };
  int b[] =  { 2, 4, 8, 10, 11, 15 };
  int s1 = sizeof(a)/sizeof(int);
  int s2 = sizeof(b)/sizeof(int);
  merge_array(a,s1,b,s2);
  return 0;
}
