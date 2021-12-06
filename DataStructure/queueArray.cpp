#include <iostream>
using namespace std;
const int SIZE = 100;
class Queue 
{
    private:
    int rear, front, arr[SIZE];
    public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int value);
    void display();
    bool is_empty();
    bool is_full();
    int dequeue();
};
bool Queue :: is_empty()
{
    return front == -1 && rear == -1;
}
bool Queue :: is_full()
{
    return rear == SIZE - 1;
}
// insert
void Queue :: enqueue(int value)
{
    if (is_full())
    {
        cout<<"The queue is full\n";
        return;
    }
    if (front == -1)
    {
        front++;
    }
    rear++;
    arr[rear] = value;
}
// delete
int Queue :: dequeue()
{
    if (is_empty())
    {
        cout<<"The queue is empty"<<endl;;
        exit(0);
    } 
    if (front == rear)
    {
        int v = arr[rear];
        front = -1;
        rear = -1;
        return v;
    }
    int v = arr[rear];
    front++;
    return v;
}
void Queue :: display()
{
    if (is_empty())
    {
        cout<<"The queue is empty"<<endl;;
        return;
    } 
    cout<<"The Queue elements\n";
    for (int i = front; i < rear; i++)
    {
        cout<<arr[i]<<" ";
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