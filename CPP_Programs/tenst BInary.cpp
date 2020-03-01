#include <iostream>
#include <malloc.h>

using namespace std;
/*Struct of linked list*/
struct Node {
  int data;
  struct Node *next;
  Node(int x) { //the constructor
    data = x;
    next = NULL;
  }
};
void printList(Node *head) { //function to print list
    Node *node = head;
    while (node != NULL) {
      cout << node -> data << ' ';
      node = node -> next;
    }
    cout << endl;
}
Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);
int main()
 {
  int test;
  cin >> test; //number of testcases input
  while (test--) { //while we have testcases we run the loop
    int n, ch, tmp;
    Node *head = NULL; //initially head is null as linked list is empty
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> tmp >> ch; 
      if (ch) head = insertAtEnd(head, tmp); 
      else head = insertAtBegining(head, tmp);
    }
    printList(head);
  }
  return 0;
}
Node *insertAtBegining(Node *head, int newData) 
{
 Node temp = new Node();
 temp = (Node*) malloc(sizeof(struct Node));
 temp->data = newData;
 temp->next = NULL;
 
 if( head == NULL)
 {
 	head =temp;
 	return head;
 }
 temp->next = head;
 head = temp;
 return temp;
}
Node *insertAtEnd(Node *head, int newData)  {
  Node temp = new Node();
 NOde = new pre Node();
   temp = (Node*) malloc(sizeof(struct Node));
   temp->data = newData;
   temp->next = NULL;
  if( head == NULL)
  {
  	head = temp;
  	return head;
  }
  pre = head;
  
  while(pre->next == NULL)
  {
  	pre = pre->next;
  }
  pre->next = temp;
  
}

