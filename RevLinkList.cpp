#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);

    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node *reversek(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;

    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startcycle;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startcycle = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startcycle;
}

bool detectioncycle(node *head)
{
    node *first = head;
    node *slow = head;
    while (first->next != NULL && first != NULL)
    {
        first = first->next->next;
        slow = slow->next;
        if (first == slow)
        {
            return true;
        }
    }
    return false;
}

void removenode(node* &head){
    node* first = head;
    node* slow = head;
    do
    {
        first=first->next->next;
        slow=slow->next;
    } while (first!=slow);
    
    first=head;
    while(first->next!=slow->next){
        first=first->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    insert(head, 8);
    insert(head, 5);
    insert(head, 0);
    insert(head, 9);
    insert(head, 7);
    insert(head, 2);
    insert(head, 1);
    insert(head, 3);
    insert(head, 4);
    insert(head, 6);
    //display(head);
    makecycle(head, 3);
    cout << detectioncycle(head)<<endl;
    removenode(head);
    cout << detectioncycle(head)<<endl;
    display(head);
    //display(head);
    //int k = 2;
    // node *newhead = reversek(head, k);
    // display(newhead);
}
