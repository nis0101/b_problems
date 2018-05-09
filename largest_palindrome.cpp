#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

string largest_pal(const string &str)
{
  int max = 1;
  for (int i =1; i< str.len(); i++)
  {
    int l = i -1;
    int h = i; 
    while( (0<=l) && (h < len) && (str[l] == str[h]))
    {
      l--;
      h++;
    }

  }
}

int main(void)
{
  string st = "AABCDCBA";
  string big = largest_pal(st);

}
