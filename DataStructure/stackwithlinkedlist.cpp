#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
class Stack 
{
    private :
    node *start;
    public :
    Stack ()
    {
        start = NULL;
    }
    void push(int value);
    void display();
    bool is_empty();
    int pop();
    int peek();
};
bool Stack :: is_empty()
{
    if (start == NULL)
    {
        return true;
    }
    return false;
}
//inster_first
void Stack :: push(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if (is_empty())   
    {
        start = temp;
        return;
    }
    temp->next = start;
    start = temp;
}
//get the first & delete it
int Stack :: pop()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return 0;
    }
    if (start->next == NULL)
    {
        int v = start->data;
        delete start;
        return v;
    }
    node *temp = new node;
    temp = start;
    int v = start->data;
    start = start->next;
    return v;
}
//get the value of first
int Stack :: peek()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return 0;
    }
    return start->data;
}
//display
void Stack :: display()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return;
    }
    node *temp = new node;
    temp = start;
    cout<<"Stack elements \n";
    while (temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Stack s;
    s.push(5);
    s.push(4);
    s.push(6);
    cout<<s.pop()<<endl;
    s.push(9);
    s.push(8);
    cout<<s.peek()<<endl;
    s.display();
    return 0;
}