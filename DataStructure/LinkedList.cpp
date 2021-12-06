#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
class Linkedlist {
    private :
    node *start, *last;
    public :
    Linkedlist() { 
        start = NULL;
    }
    void add_node(int value);
    void insert_first(int value) ;
    void insert_position(int pos, int value) ;
    void delete_first() ;
    void delete_last() ;
    void delete_position(int pos);
    void display();
};
void Linkedlist :: add_node(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = NULL;
    if (start == NULL)
    {
        start = new_node;
        last = new_node;
    }
    else
    {
        last->next = new_node;
        last = new_node;
    }
}
void Linkedlist :: insert_first(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = NULL;
    if (start == NULL)
    {
        start = new_node;
        last = new_node;
    }
    else {
    new_node->next = start;
    start = new_node;
    }
}
void Linkedlist :: insert_position(int pos, int value)
{
    node *pre = new node;
    node *current = new node;
    current = start;
    pre = start;
    node *new_node = new node;
    new_node->data = value;
    for (int i = 1; i < pos; i++)
    {
        pre = current;
        current = current->next;
        if (current == NULL)
        {
            cout<<"The list has element less than "<<pos<<" element"<<endl;
            return;
        }
    }
    pre->next = new_node;
    new_node->next = current;
}
void Linkedlist :: delete_first()
{
    if (start == NULL)
    {
        cout<<"The list is empty";
        return;
    }
    if (start->next == NULL)
    {
        delete start;
        delete last;
        return;
    }
    node *temp = new node;
    temp = start;
    start = start->next;
    delete temp;
}
void Linkedlist :: delete_last()
{
    if (start == NULL)
    {
        cout<<"The list is empty";
        return;
    }
    if (start->next == NULL)
    {
        delete start;
        delete last;
        return;
    }
    node *temp;
    node *to_delete = last;
    temp = start->next;
    while (temp->next != last)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    last = temp;
    delete to_delete;
}
void Linkedlist :: delete_position(int pos)
{
    node *current = start;
    node *pre = start;
    for (int i = 1; i < pos; i++)
    {
        pre = current;
        current = current->next;
        if (current == NULL)
        {
            cout<<"The list has element less than "<<pos<<" element"<<endl;
            return;
        }
    }
    pre->next = current->next;
    delete current;
}
void Linkedlist::display()
{
    if (start == NULL)
    {
        cout<<"The list is empty";
        return;
    }
    node *temp = start;
    cout<<"The elements in the linkedlist are "<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    int value;
    Linkedlist list;
    // cin>>value;
    value = 3;
    list.add_node(value);
    list.add_node(10);
    list.insert_first(4);
    list.insert_first(5);
    list.insert_first(6);
    list.display();
    list.insert_position(3,-1);
    list.display();
    list.delete_position(2);
    list.display();
    return 0;
}
