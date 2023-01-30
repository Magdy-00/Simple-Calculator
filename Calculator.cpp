#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char confirmation;
    confirmation = 'y';
    cout << " '|' for square root \n";
    cout << " '^' for power \n";
    cout << " '+' for addition \n";
    cout << " '-' for subtraction \n";
    cout << " '/' for division \n";
    cout << " '*' for multiplication \n";
    cout << "The op '|' only takes one number \n";
    int num1;
    int num2;
    char op;
    while (confirmation == 'y')
    {
        cout << "Enter an operator: \n";
        cin >> op;
        if (op == '|')
        {
            cout << "Enter the number: \n";
            cin >> num1;
        }
        else
        {
            cout << "Enter the frist number: \n";
            cin >> num1;
            cout << "Enter the second  number: \n";
            cin >> num2;
        }
        switch (op)
        {
            // power operation
        case '^':
        {
            cout << "The result is: " << pow(num1, num2) << endl;
            break;
        }
            // square root operation
        case '|':
        {
            cout << "The result is: " << sqrt(num1) << endl;
            break;
        }
            // addition operation
        case '+':
        {
            cout << "The result is: " << num1 + num2 << endl;
            break;
        }
        case '/':
            // division operation
            {
                cout << "The result is: " << num1 / num2 << endl;
                break;
            }
        case '-':
            // subtraction operation
            {
                cout << "The result is: " << num1 - num2 << endl;
                break;
            }
        case '*':
            // multiplication operation
            {
                cout << "The result is: " << num1 * num2 << endl;
                break;
            }
        default:
            cout << "Wrong operator\n";
        }
        cout << "Do you want to continue ?(y for yes, n for n) " << endl;
        cin >> confirmation;
    }

    return 0;
}
