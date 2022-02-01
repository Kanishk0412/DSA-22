#include<iostream>
using namespace std;

int main() {

    int a, b;
    char sign;

    cout << "Input Two Numbers: " ;
    cin >> a >> b ;

    cout << "Input Operator: " ;
    cin >> sign ;

    switch (sign)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    
    default:
    cout << "Enter other operator" << endl;
        break;
    }

    return 0;
}