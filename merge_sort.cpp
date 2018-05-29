#include<iostream>

using namespace std;


void merge(int *a, int s, int m , int e)
{
  int i = s, j = m + 1, k = 0;
  int *tmp = (int *)malloc(sizeof(int) *(e - s + 1));
  while(i <= m && j <= e)
  {
    if(a[i] <= a[j])
      tmp[k++] = a[i++];
    else
      tmp[k++] = a[j++];
  }
  while ( i <= m)
     tmp[k++] = a[i++];

  while ( j <= m)
     tmp[k++] = a[j++];
  j = 0;
  for(i = s; i <= e; i++)
  {
    //cout<<"a[i] :: " << a[i] <<" tmp[j] :: "<< tmp[j] <<endl;
    a[i] = tmp[j++];
    
  }
  free(tmp);
}

void merge_sort(int *a, int s, int e)
{
   if(s< e)
   {
      int mid = s + (e-s)/2;
      merge_sort(a,s,mid);
      merge_sort(a,mid+1,e);
      merge(a,s,mid,e);
   }
}


int main(void)
{

  int a[] = {9,8,7,6,5,4,3,2,1};
  int s = sizeof(a)/sizeof(a[0]);
  merge_sort(a,0,s-1);
  for(int i = 0; i < s; i++)
   cout<<a[i]<<" ";

}
