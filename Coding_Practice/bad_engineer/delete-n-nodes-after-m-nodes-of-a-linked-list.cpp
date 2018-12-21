
/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as
  struct node
  {
     int data;
     struct node *next;
  }

*/
/*void linkdelete(struct node  *head, int M, int N)
{
//Add code here
int i;
struct node *temp = head;
struct node *t;
int count,count2;
while(temp!=NULL){
    count=1;
    while(count<M )
        {
            temp=temp->next;
            count++;
            if(temp==NULL)
                return ;

        }
    t=temp->next;
    if(t==NULL)
        return;
    count2=1;
    while(count2<N && N !=0){
        t=t->next;
        count2++;
        if(t==NULL)
            break;
    }
    if(t!=NULL && N!=0)
        t=t->next;
    temp->next=t;
    temp=t;

}
}
*/

