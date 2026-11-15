#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<int> s;
    string exp;
    int a, b;

    cout << "Enter postfix: ";
    cin >> exp;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else
        {
            b = s.top();
            s.pop();

            a = s.top();
            s.pop();

            if (ch == '+')
                s.push(a + b);

            else if (ch == '-')
                s.push(a - b);

            else if (ch == '*')
                s.push(a * b);

            else if (ch == '/')
                s.push(a / b);
        }
    }

    cout << "Result = " << s.top();

    return 0;
}
