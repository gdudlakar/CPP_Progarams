
#include<iostream>
#include <queue>
#include <stdlib.h>
#define null 0
#define mx 20

using namespace std;

struct node
{
  int data;
  node *llink, *rlink;
};

typedef node *NODE;

class BST
{
  public: NODE root;
  BST()
  {
      root = null;
  }
	void insert();
	void dis( NODE, int);
	void inorder(NODE);
};

void BST:: inorder(NODE firt)
{
	if( firt != null)
	{
	inorder(firt->llink);
	cout << firt->data << " " ;
	inorder( firt->rlink);
	}
}
void BST:: insert()
{
  NODE temp,cur,pre;
	int item;
  cout << " enter the item" << endl;
  cin >> item;
  temp = (NODE) malloc(sizeof(NODE*));
  temp->data = item;
  temp->llink = null;
  temp->rlink = null;
  
  if ( root == null )
  {
    root = temp;
    return;
  }
  pre = null;
  cur = root;
  while ( cur != null)
  {
    pre = cur;
    if(item == cur->data)
    {
      cout << " its duplicate values" << endl;
      free(temp);
      return;
    }
    if( item < cur->data)
      cur = cur->llink;
    else
      cur = cur->rlink;
 }
if ( item < pre->data)
    pre->llink = temp;
else
    pre->rlink = temp;

}

int main()
{
	int n, max, size = 0;
    BST a;
  cout <<  "here we go with BST\n enter your chooice\n";
while(1)
{
  cout << "1:insert\n2:display\n3:inordert\n " << endl;
  cin >> n;
  
  switch(n)
  {
  	case 1:
  			a.insert();
  			break;
  	case 2:
  			a.dis(a.root,1 );
  			break;
  	case 3: 
  			a.inorder(a.root);
  			break;
			
  	case 4: exit(0);
  	default:
  			cout << " enter the valid inout" << endl;
  }
 }
  return 0;  
}

