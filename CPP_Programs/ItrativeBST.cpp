#include <bits/stdc++.h>
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
	void iterative(NODE);
	void inorder(NODE);
	void pre(NODE);
	void Rpre(NODE);
	int search();
	NODE max(NODE);
	NODE min(NODE);
};

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


void BST::iterative(NODE root)
{
	stack <NODE> s;
	NODE cur = root;
	
	while( cur != null || s.empty() == false )
	{
		while( cur != null)
		{
			s.push(cur);
			cur = cur->llink;
		}
		
		cur = s.top();
		s.pop();
		
		cout << cur->data << " " ;
		cur->rlink;
	}
}




void BST::inorder(NODE root)
{
	if (root != null)
	{
		inorder(root->llink);
		cout << root->data << " " ;
		inorder(root->rlink);
	}
}


void BST::pre(NODE root)
{
	stack <NODE> s;
	NODE cur = root;
	
	while ( cur != null || s.empty() == false)
	{
		while( cur != null)
		{
		s.push(cur);
		cout << cur->data << " ";
		cur = cur->llink;
	}
	
	cur = s.top();
	s.pop();
	
	cur = cur->rlink;
	}				
}

int BST::search()

{
	NODE cur;
	int item, s;
	if ( root == null)
	{
		cout << "list is empty\n";
	}
	
	cur = root;
	
	cout << "enter the item to search in list\n";
	cin >> item;
	
	while ( cur != null)
	{
		if( item == cur->data)
		{
			return 1;
		}
		
		if ( item < cur->data)
			cur  = cur->llink;
		if(item > cur->data)
			cur = cur->rlink;
	}
	return 0;
}

NODE BST::max(NODE root)
{
	NODE cur = root;
	while ( cur != null)
	{
		cur = cur->rlink;
	}
	
	cout << cur->data << " \n";
	return cur;
}

NODE BST::min(NODE root)
{
	NODE cur = root;
	while ( cur != null)
	{
		cur = cur->llink;
	}
	
	return cur;
}


int main()
{
	int n, s;
	NODE maxi, mini;
	BST b;
	cout << " binay tree insertion has begine\n";
	cout << " chooice wht u want to insert \n";
	
	while(1)
	{
		cout << "1:insert\n2:inorderIT\n3:inR\n4:pre\n5:search\n6:max and min\n10:exit\n";
		cin >> n;
	switch(n)
	{
	case 1: 
			b.insert();
			break;
	case 2: 
			b.iterative(b.root);
			break;
	case 3:
			 b.inorder(b.root);
			break;
	case 4:
			 b.pre(b.root);
			break;		
	
	case 5: 
			s = b.search();
			if ( s == 1)
				cout << "succesfull \n";
			else
				cout << " not successfull\n";
			break;
	case 6:
			cout << "max\n"; 
			 maxi = b.max(b.root);
			cout << "min -> " << maxi->data <<endl;
			 mini = b.min(b.root);
			 cout << "min -> " << mini->data <<endl;
			break;
 	case 10: 
				exit(0);
	default:
			cout << " try diferent option\n";
			break;
	}
	}

	return 0;
	
}
