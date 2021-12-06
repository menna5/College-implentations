#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 500;
class PostFix 
{
    private :
    int top;
    char postFix[MAX_SIZE];
    public :
    PostFix ()
    {
        top = -1;
    }
    void push(char value);
    bool is_empty();
    bool is_full();
    char pop();
    char peek();
};
bool PostFix :: is_empty()
{
    return top == -1;
}
bool PostFix :: is_full()
{
    return top == MAX_SIZE - 1;
}
void PostFix :: push(char value)
{
    if (is_full())   
    {
        cout<<"The stack is full"<<endl;
        return;
    }
    top++;
    postFix[top] = value;
}
char PostFix :: pop()
{
    if (is_empty())   
    {
        cout<<"The stack is empty"<<endl;
        return -1;
    }
    top--;
    return postFix[top + 1];
}
char PostFix :: peek()
{
    return postFix[top];
}
// first function for priority of operators
int priority (char alpha)
{
    if (alpha == '^')
        return 3;
    if (alpha == '*' || alpha == '/' || alpha == '%')
        return 2;
    if (alpha == '+' || alpha == '-')
        return 1;
    else 
    {
        return -1;
    }
}
// second function for converting from infix to postfix
string convert(string str)
{
    PostFix s;
    string r;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]))
        {
            r.push_back(str[i]);
        }
        else if (str[i] == ')')
        {
            while (s.peek() != '(' && s.is_empty() == false)
            {
                r += s.pop();
            }
            s.pop();
        }
        else if (str[i] == '(')
        {
            s.push('(');
        }
        else if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            while((!s.is_empty())&&(priority(str[i])<=priority(s.peek())))
            {
                r += s.pop();
            }
            s.push(str[i]);
        }
    }
    while(!s.is_empty())
	{
	    r += s.pop();
	}
    return r;
}
// third function for operations
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
// fourth function to evaluate the postfix expression
int evaluate (string post)
{
    PostFix s;
    for (int i = 0; i < post.size(); i++)
    {
        if (isdigit(post[i]))
            s.push(post[i] - '0');
        else if (post[i] == ' ')
            continue;
        else
        {
            int op2 = s.pop();
            int op1 = s.pop();
            int result = operate(op1, op2, post[i]);
            s.push(result);
        }
    }
    return s.pop();
}
int main()
{
    string exp, post;
    int result;
    getline(cin, exp);
    post = convert(exp);
    result = evaluate(post);
    cout<<"The evaluation of "<<post<<" is "<<result;
    return 0;
}