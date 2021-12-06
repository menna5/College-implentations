#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class Queue 
{
    private:
    node *rear, *front;
    public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value);
    void display();
    bool is_empty();
    int dequeue();
};
bool Queue :: is_empty()
{
    return front == NULL && rear == NULL;
}
// insert last
void Queue :: enqueue(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    if (is_empty())
    {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
// delete first
int Queue :: dequeue()
{
    if (is_empty())
    {
        cout<<"The queue is empty"<<endl;;
        exit(0);
    } 
    if (front->next == NULL)
    {
        int v = front->data;
        front = NULL;
        rear = NULL;
        return v;
    }
    node *temp;
    temp = front;
    front = front->next;
    int v = temp->data;
    delete  temp;
    return v;
}
void Queue :: display()
{
    if (is_empty())
    {
        cout<<"The queue is empty"<<endl;;
        return;
    } 
    node *temp;
    temp = front;
    cout<<"The Queue elements\n";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Queue q;
    for (int i = 1; i < 7; i++)
    {
        q.enqueue(i);
    }
    q.display();
    q.dequeue();
    q.display();
    return 0;
}