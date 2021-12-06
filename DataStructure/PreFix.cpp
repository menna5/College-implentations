#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
const int MAX_SIZE = 500;
class PreFix 
{
    private :
    int top;
    char preFix[MAX_SIZE];
    public :
    PreFix ()
    {
        top = -1;
    }
    void push(char value);
    bool is_empty();
    bool is_full();
    char pop();
    char peek();
};
bool PreFix :: is_empty()
{
    return top == -1;
}
bool PreFix :: is_full()
{
    return top == MAX_SIZE - 1;
}
void PreFix :: push(char value)
{
    if (is_full())   
    {
        cout<<"The stack is full"<<endl;
        return;
    }
    top++;
    preFix[top] = value;
}
char PreFix :: pop()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return -1;
    }
    top--;
    return preFix[top + 1];
}
char PreFix :: peek()
{
    return preFix[top];
}
int priority (char alpha)
{
    if (alpha == '^')
        return 3;
    if (alpha == '*' || alpha == '/' || alpha == '%')
        return 2;
    if (alpha == '+' || alpha == '-')
        return 1;
    else
        return -1;
}
string convert(string str)
{
    PreFix s;
    string r;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]))
        {
            r += str[i];
        }
        else if (str[i] == ')')
        {
            while (s.peek() != '(' && !s.is_empty())
            {
                r = s.pop() + r;
            }
            s.pop();
        }
        else if (str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            while((!s.is_empty())&&(priority(str[i])<=priority(s.peek())))
            {
                r = s.pop() + r;
            }
            s.push(str[i]);
        }
    }
    while(!s.is_empty())
	{
	    r = s.pop() + r;
	}
    // reverse(r.begin(),r.end());
    return r;
}
int operate(int op1, int op2, char op)
{
    if (op =='+')
        return op1 + op2;
    else if (op == '-')
        return op1 - op2;
    else if (op == '*')
        return op1 * op2;
    else if (op == '/')
        return op1 / op2;
}
int evaluate (string pre)
{
    PreFix s;
    for (int i = pre.size() - 1; i >= 0; i--)
    {
        if (isdigit(pre[i]))
        {
            s.push(pre[i] - '0');
        }
        else if (pre[i] == ' ')
        {
            continue;
        }
        else
        {
            int op1 = s.pop(), op2 = s.pop();
            int result = operate(op1, op2, pre[i]);
            s.push(result);
        }
    }
    return s.pop();
}
int main()
{
    PreFix s;
    string exp, post;
    int result = 0;
    getline(cin, exp);
    post = convert(exp);
    result = evaluate(post);
    cout<<"The evaluation of "<<post<<" is "<<result;
    return 0;
}