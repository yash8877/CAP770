#include <iostream>
using namespace std;
void paranthesisCheck(char str[])
{
    int count = 0, i = 0, flag = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '(')
        {
            count++;
        }
        else if (str[i] == '{')
        {
            flag++;
        }
        else if (str[i] == ')')
        {
            count--;
        }
        else if (str[i] == '}')
        {
            flag--;
            if (count < 0 && flag < 0)
            {
                break;
            }
        }

        i++;
    }
    if (count, flag == 0)
    {
        cout << "Expression Balanced" << endl;
    }
    else
    {
        cout << "Expression Unbalanced" << endl;
    }
}

int main()
{
    char str[50];
    cout << "Enter the sentences: ";
    cin >> str;
    paranthesisCheck(str);

    return 0;
}