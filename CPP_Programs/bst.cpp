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
  int cout1 = 0;
  BST()
  {
      root = null;
  }
	void insert();
	void dis( NODE, int);
	void inorder(NODE);
	void level();
	void printLevelOrder(NODE);
	int  height(NODE);
	int max(int,int);
	int count(NODE);
	void printleaf(NODE);
};



void BST::printleaf(NODE root)
{
	if (root == null)
		return;
	if(root->llink == null && root->rlink == null)
	{
		cout << root->data << "  " ;
		return;
	}
	
	if(root->llink != null)
		printleaf(root->llink);
	if(root->rlink != null )
		printleaf(root->rlink);
}


int BST::count(NODE root)
{
	if ( root != null)
	{
	count(root->llink);
	 cout1++;
	count(root->rlink);
	}
	
}


void BST:: level()
{
	NODE cur,q[mx];
	int f = 0, r = -1;
	if ( root == null)
	{
		cout < " damage found pr else item are not there to disaply\n";
		return;	
	}	
	q[++r] = root;
	while ( f <= r)
	{
		cur = q[f++];
		cout << cur->data << " " ;
		if (cur->llink != null)
			q[r++] = cur->llink;
		if(cur->rlink != null)
			q[r++] = cur->rlink;
	}
	cout << " \n";
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



void BST::printLevelOrder(NODE root)  
{  
    // Base Case  
    if (root == null) return;  
  
    // Create an empty queue for level order tarversal  
    queue<NODE> q;  
  
    // Enqueue Root and initialize height  
    q.push(root);  
  
    while (q.empty() == false)  
    {  
        // nodeCount (queue size) indicates number 
        // of nodes at current lelvel.  
        int nodeCount = q.size();  
  
        // Dequeue all nodes of current level and  
        // Enqueue all nodes of next level  
        while (nodeCount > 0) 
        {  
            node *node = q.front();  
            cout << node->data << " ";  
            q.pop();  
            if (node->llink != null)  
                q.push(node->llink);  
            if (node->rlink != null)  
                q.push(node->rlink);  
            nodeCount--;  
        }  
        cout << endl;  
    }  
}  
 


void BST :: dis( NODE root, int n)
{
	if ( root != null)
	{
	//	cout << " nothing thr to display in tree thts mean tree is empty" << endl ;
	dis(root->rlink, n + 1);
	cout << root->data << " ";
	dis(root->llink, n + 1);
	}
}
	

void BST:: inorder(NODE firt)
{
	if( firt != null)
	{
	inorder(firt->llink);
	cout << firt->data << " " ;
	inorder( firt->rlink);
	}
}


int BST:: max(int a,int b)
{
	return (a>b)?a:b;
}

int BST::height(NODE root)
{
	if ( root == null) return 0;
		return 1 + max(height(root->llink),height(root->rlink));
}


int main()
{
	int n, max, size = 0;
    BST a;
  cout <<  "here we go with BST\n enter your chooice\n";
while(1)
{
  cout << "1:insert\n2:display\n3:inorder\n4:levael\n5:order\n6:height\n7:count\n8:leaf\n10:exit\n " << endl;
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
	case 4:
			a.level();
			break;
	case 5:
			a.printLevelOrder(a.root);
			break;
	case 6:  max = a.height(a.root); 
			cout << " hieght of the tree =->  " << max << "\n" << endl;
			break;
	case 7:
			 a.count(a.root);
			cout << a.cout1 << "\n";
			break;
	case 8:
			cout << " LEAFE NODES ELEMENTS ARE \n" << endl;
			 a.printleaf(a.root);
			
			break;
			
  	case 10: exit(0);
  	default:
  			cout << " enter the valid inout" << endl;
  }
 }
  return 0;  
}

