#include <iostream>
using namespace std;
struct node
{
    node *next;
    int data;
};
class Circular
{
private:
    node *last;

public:
    Circular()
    {
        last = NULL;
    }
    void add_node(int value);
    void insert_position(int pos, int value);
    void delete_node();
    void display();
    bool empty();
};
bool Circular ::empty()
{
    return last == NULL;
}
void Circular ::add_node(int value)
{
    node *temp = new node;
    temp->data = value;
    if (empty())
    {
        last = temp;
        temp->next = temp;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
    }
}
void Circular ::insert_position(int pos, int value)
{
    if (empty() && pos != 1)
    {
        cout << "The list is empty, we can't find that position.\n";
        return;
    }
    node *temp = new node;
    temp->data = value;
    node *cur = last;
    for (int i = 1; i < pos; i++)
    {
        cur = cur->next;
        if (cur == NULL)
        {
            cout << "The list has element less than " << pos << " element" << endl;
            return;
        }
    }
    temp->next = cur->next;
    cur->next = temp;
}
void Circular ::delete_node()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    if (last->next == last)
    {
        last = NULL;
    }
    node *temp = last;
    node *to_delete;
    while (temp->next->next != last)
    {
        temp = temp->next;
    }
    to_delete = temp->next;
    temp->next = last;
    delete to_delete;
}
void Circular ::display()
{
    if (empty())
    {
        cout << "The list is empty.";
        return;
    }
    node *temp = last;
    cout << "List items : \n";
    while (temp->next != last)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    Circular c;
    c.add_node(5);
    c.add_node(6);
    c.add_node(4);
    c.display();
    c.insert_position(2, 7);
    c.display();
    c.delete_node();
    c.display();
}