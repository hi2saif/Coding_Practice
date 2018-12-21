/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
  struct node
  {
     int data;
     struct Node *next;
  }
*//*
struct node *reverse (struct node *head, int k)
{
  // Complete this method
  if(head==NULL)
        return 0;
    int count=0;
    struct node *t=head;
    struct node *prev=NULL;
    struct node *next1=NULL;
    while(t!=NULL && count<k){
        next1=t->next;
        t->next=prev;
        prev=t;
        t=next1;
        count++;
    }
   if(next1!=NULL){
       head->next=reverse(next1,k);
   }
    return prev;
}
*/
