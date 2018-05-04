#include<iostream>
#include<stack>
using namespace std;

typedef struct Node
{
  int val;
  Node *next;
}Node;

void insert(Node **head,int val)
{
  Node *h = *head;
  Node * tmp = (Node *)malloc(sizeof(Node));
  tmp->val = val;
  tmp->next = NULL;
  if(h == NULL)
  {
    h = tmp;
    *head = tmp;
  }
  else
  {
    while(h->next != NULL)
    {
      h = h->next;
    }
    h->next = tmp;
  }
  
}
void print_list(Node *head)
{
  if(head == NULL)
  {
   cout<<"HEad is null"<<endl;
   return;
  }
  while(head != NULL)
  {
   cout<<head->val<<"\t";
   head = head->next;
  }
}
void add(Node * head1, Node *head2)
{
  stack<int> s1,s2,s3;
  Node * cur = head1;
  while(cur != NULL)
  {
   s1.push(cur->val);
   cur = cur->next;
  }
  cur = head2;
  while(cur != NULL)
  {
   s2.push(cur->val);
   cur = cur->next;
  }
  Node * nptr = NULL, *head= NULL;
  int carry =0 ;
  Node *nhead = NULL;
  int sum;
  while(!s1.empty() || !s2.empty() || carry)
  {
    sum = 0;
    if(!s1.empty())
    {
      sum = s1.top();
      cout<<"Sum s1:: "<<s1.top()<<"\t";
      s1.pop();
    }
    if(!s2.empty())
    {
      sum += s2.top();
      cout<<"Sum s2:: "<<s2.top()<<endl;
      s2.pop();
    }
    sum += carry;
    carry = sum /10;
    cout<<"Inserting :: "<<sum%10<<endl;
    s3.push(sum%10);
  }
  while(!s3.empty())
  {
    insert(&nhead, s3.top());
    s3.pop();
  }
  print_list(nhead);
}

int main(void)
{
  Node * head1 = NULL; 
  Node * head2 = NULL;
  insert(&head1,1);
  insert(&head1,2);
  insert(&head1,3);
  insert(&head2,5);
  insert(&head2,4);
  insert(&head2,7);
  add(head1,head2);
}
