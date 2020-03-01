#include<iostream>
#include<cstdlib>
#define null 0

using namespace std;

struct node
{
  int data;
  struct node *link;
};

typedef struct node *NODE;
NODE head = null;
NODE insertFront( NODE head);
NODE insertRear( NODE head);
NODE insertMidle( NODE head);
NODE display(NODE head);


int main()
{
  
  int item, ch = 0, ch1;
  int pos;
 
  cout << "enter the choice to be entered" << endl;
  
  cout << "1:insert\n2:delete\n3:display\n4:exit\n" << endl;
  cin >> ch;
  for(;;)
  {
  switch(ch)
  {
    case 1:		
    		 
   case 2: 
           head = insertFront(head);
                   break;
    case 3: 
            head = insertMidle(head);
                        break;
        case 4: 
                       head = insertRear(head);
                        break;
               case 3: 
              display(head);
              break;
    case 4: 
              exit(0);
    default:
              cout << " u missed man\n" << endl;
              break;

  }
  }
  return 0;
}
NODE insertFront( NODE head)
{
  NODE temp;
  int item;

  temp = (NODE) malloc(sizeof(NODE*));
  cout << " enter the item value\n" << endl;
  cin >> item;
  temp->data = item;

  if(head == null)
  {
    temp = head;
    return head;
  }
  
  temp->link = head;
  head=temp;
  return head;
}

NODE insertMidle( NODE head)
{
  NODE temp,nxt,pre;
  int item, count = 0;
  int pos;
  
  cout << " enter the position\n" << endl;
  cin >> pos;
  
  temp = (NODE) malloc(sizeof(NODE*));
  cout << " enter the item value" << endl;
  cin >> item;
  temp->data = item;

  if(head == null)
  {
    temp = head;
    return head;
  }
  nxt = head;
  while( count == pos)
  {
    nxt = nxt->link;
    count++;
  }
  if ( count > pos)
  {
    cout << " plesae give within the limit";
  }

  temp->link = nxt->link;
  nxt->link = temp;
  return head;
}

NODE insertRear( NODE head)
{
  NODE temp,nxt,pre;
  int item;

  temp = (NODE) malloc(sizeof(NODE*));
  cout << " enter the item value" << endl;
  cin >> item;
  temp->data = item;

  if(head == null)
  {
    temp = head;
    return head;
  }
  nxt = head;
  while( nxt->link == null)
  {
    nxt = nxt->link;
  }

  nxt->link = temp;
  nxt->link = null;
  return head;
}
NODE display( NODE head)
{
	if(head == null)
	{
		cout << "no data is to display" << endl;
		exit(0);
	}
	while( head->link == null)
	{
		cout << head->data << endl;
	}
}

