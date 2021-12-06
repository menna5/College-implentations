#include <iostream>
using namespace std;
const int MAX_SIZE = 500;
class Stack 
{
    private :
    int top, stack[MAX_SIZE];
    public :
    Stack ()
    {
        top = -1;
    }
    void push(int value);
    void display();
    bool is_empty();
    bool is_full();
    int pop();
    int peek();
};
bool Stack :: is_empty()
{
    return top == -1;
}
bool Stack :: is_full()
{
    return top == MAX_SIZE - 1;
}
void Stack :: push(int value)
{
    if (is_full())   
    {
        cout<<"The stack is full"<<endl;
        return;
    }
    top++;
    stack[top] = value;
}
int Stack :: pop()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return 0;
    }
    top--;
    return stack[top + 1];
}
int Stack :: peek()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return 0;
    }
    return stack[top];
}
void Stack :: display()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return;
    }
    cout<<"Stack elements \n";
    for (int i = top; i >= 0; i--)
    {
        cout<<stack[i]<<"\t";
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