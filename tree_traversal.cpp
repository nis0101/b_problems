#include<iostream>
#include<vector>
#include<deque>
using namespace std;
typedef struct tNode
{
  int val;
  tNode *left,*right;
}tNode;

tNode * getNode(int val)
{
  tNode * n = new tNode;
  n->val = val;
  n->left = n->right = NULL;
}

void insertLeft(tNode* p, tNode* c)
{
  p->left = c;
}
void insertRight(tNode* p, tNode* c)
{
  p->right= c;
}
void traverseTree(tNode * root)
{
  deque<tNode *> q;
  q.push_back(root);
  while(!q.empty())
  {
    tNode * tmp = q.front();
    q.pop_front();
    cout<<tmp->val<<endl;
   if(NULL != tmp->left)
      q.push_back(tmp->left);
   if(NULL != tmp->right)
      q.push_back(tmp->right);
  } 
}

int main(void)
{
  tNode * root = getNode(1);
  insertLeft(root,getNode(2));
  tNode* l = root->left;
  insertRight(root,getNode(3));
  tNode* r = root->right;
  insertLeft(l,getNode(4));
  insertRight(l,getNode(5));
  insertLeft(r,getNode(6));
  insertRight(r,getNode(7));
  traverseTree(root);
}
