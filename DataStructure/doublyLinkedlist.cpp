#include <iostream>
using namespace std;
struct node
{
    node *next;
    node *pre;
    int data;
};
class Doubly
{
private:
    node *start, *last;

public:
    Doubly()
    {
        start = NULL, last = NULL;
    }
    void add_node(int value);
    void insert_first(int value);
    void insert_position(int pos, int value);
    void delete_first();
    void delete_last();
    void delete_position(int pos);
    void delete_data();
    void display();
    bool empty();
};
node *new_node(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->pre = NULL;
    temp->next = NULL;
    return temp;
}
bool Doubly ::empty()
{
    return start == NULL;
}
void Doubly ::insert_first(int value)
{
    node *temp = new_node(value);
    if (empty())
    {
        start = temp;
        last = temp;
        return;
    }
    else
    {
        temp->next = start;
        start->pre = temp;
        start = temp;
    }
}
void Doubly ::add_node(int value)
{
    node *temp = new_node(value);
    if (empty())
    {
        start = temp;
        last = temp;
        return;
    }
    else
    {
        temp->pre = last;
        last->next = temp;
        last = temp;
        temp->next = NULL;
    }
}
void Doubly ::insert_position(int pos, int value)
{
    if (empty() && pos != 1)
    {
        cout << "The list is empty, we can't find that position.\n";
        return;
    }
    node *temp = new_node(value);
    node *cur = start;
    for (int i = 1; i < pos; i++)
    {
        cur = cur->next;
        if (cur == NULL)
        {
            cout << "The list has element less than " << pos << " element" << endl;
            return;
        }
    }
    temp->next = cur;
    temp->pre = cur->pre;
    cur->pre->next = temp;
    cur->pre = temp;
}
void Doubly ::delete_last()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    if (last->pre == NULL)
    {
        delete start;
        delete last;
        return;
    }
    node *temp = last;
    last = last->pre;
    last->next = NULL;
    delete temp;
}
void Doubly ::delete_first()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    if (start->next == NULL)
    {
        start = NULL;
        last = NULL;
        return;
    }
    node *temp = start;
    start = start->next;
    start->pre = NULL;
    delete temp;
}
void Doubly ::delete_position(int pos)
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    node *cur = start;
    for (int i = 1; i < pos; i++)
    {
        cur = cur->next;
        if (cur == NULL)
        {
            cout << "The list has element less than " << pos << " element" << endl;
            return;
        }
    }
    cur->next->pre = cur->pre;
    cur->pre->next = cur->next;
    delete cur;
}
void Doubly ::delete_data()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    if (one_node())
    {
        start = NULL;
        last = NULL;
        return;
    }
    node *temp;
    while (start != NULL)
    {
        temp = start;
        start = start->next;
        delete temp;
    }
    delete last;
}
void Doubly ::display()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    node *temp = start;
    cout << "List items : \n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Doubly d;
    d.add_node(5);
    // d.display();
    d.add_node(6);
    // d.display();
    d.insert_first(4);
    // d.display();
    d.insert_position(2, 7);
    // d.display();
    // d.delete_position(3);
    // d.display();
    // d.delete_first();
    // d.display();
    // d.delete_last();
    // d.display();
    // d.delete_last();
    // d.display();
    // d.delete_data();
    d.display();
}
