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
  BST()
  {
      root = null;
  }
	void insert();
	void itpre(NODE);
	void rpre(NODE);
};

void BST::rpre(NODE root)
{
	if ( root != null)
	{
		rpre(root->llink);
		rpre(root->rlink);
		cout << root->data << "->" ;
	}
}

void BST::itpre(NODE root)
{
	stack <NODE> s;
	NODE cur;
	cur = root;
	 if ( root == null)
	 {
	 	cout << " emtpy tree\n";
	 	return;
	  } 
	  
	  while ( cur != null || s.empty() == false)
	  {
	  	if(cur != null)
	  	{
	  		s.push(cur);
	  		cur = cur->llink;
		}
		else
		{
			cur = s.top();
			if( cur->rlink == null)
			{
				
				cout << cur->data << "->";
				s.pop();
				cur = s.top();
				if ( cur->rlink == null)
				{
					cout << cur->data << "->";
				 	s.pop();
				 	cur = s.top();
				}
				
			}
		if( s.empty() == false)
			{
				cur = s.top();
				cur = cur->rlink;
			}
			cur = null;
		}
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
	BST b;
	int ch;
	
	while(1)
	{
		cout << "enter the chooice \n";
		cout << "1:insert\n2:max\n3:min\n";
		cin >> ch;
		
		switch(ch)
		{
			case 1: b.insert();
					break;
			case 2: 
					b.rpre(b.root);
					break;
			case 3:
					b.itpre(b.root);
					break;
			case 11: 
					exit(0);
			default: 
					cout << "try something else with correct chooice\n";
		}
	}
	return 1;
}

