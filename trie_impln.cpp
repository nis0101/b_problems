#include<iostream>
#include<vector>
using namespace std;

#define CHILD_SIZE 26
typedef struct trieNode
{
  trieNode * children[CHILD_SIZE];
  bool end;
}trieNode;

trieNode* getNode(void)
{
  trieNode * node = new trieNode();
  node->end = false;
  for(int i = 0; i < CHILD_SIZE ; i++)
     node->children[i] = NULL;
  return node;
}

void insert(trieNode * root, const string &key)
{
  trieNode *p = root;
  int size = key.size();
  for(int i = 0; i < size; i++)
  {
     int ind = (int)key[i] - (int)'a';
     if(!p->children[ind])
       p->children[ind] = getNode();
     p = p->children[ind];
  }
  p->end = true;
}

bool search(trieNode *root, const string &key)
{
  int size = key.size();
  trieNode *p  = root;
  for(int i  = 0; i< size; i++)
  {
    
     int ind = (int)key[i] - (int)'a';
     if(!p->children[ind])
        return false;
     //cout<<"Key char ::"<<key[i]<<" index :: "<<ind<<endl;
     p = p->children[ind];
  }
  return( (p !=  NULL) );
}

int main(void)
{
  trieNode * root = getNode();
  insert(root,"hello");
  cout<<search(root,"hel")<<endl;
  cout<<search(root,"hell")<<endl;
  cout<<search(root,"ell")<<endl;
}

