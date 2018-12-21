/*#include<iostream>
#include<stack>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}




void printSpiral(struct Node *root){
     //Your code here
    stack<struct Node*>q1;
   stack<struct Node*>q2;
   if(root==NULL)
        return
       q1.push(root);
   while(!q1.empty() || !q2.empty()){
        while(!q1.empty()){
            struct Node *temp = q1.top();
            q1.pop();
            cout<<"das";
            cout<<temp->data<< " ";
            if(temp->right)
                q2.push(temp->right);
             if(temp->left)
                q2.push(temp->left);

        }
        while(!q2.empty()){
            struct Node * temp1 =q2.top();
            q2.pop();
            cout<<temp1->data<< " ";
            if(temp1->left)
                q1.push(temp1->left);
            if(temp1->right)
                q1.push(temp1->right);
        }

   }

}


int main()
{
   int t;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d\n",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }

    printSpiral(root);
    cout<<endl;
  }
    return 0;
}

*/
