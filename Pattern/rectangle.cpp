#include<iostream>
using namespace std;

int main() {

    int a;
    cout << "Enter the Number of Rows to Print: " ;
    cin >> a ;
    cout << "\n" << endl;

    for (int i = 0; i <= a; i++)
    {
        cout << "* * * *" << endl;
    }
    
    return 0;
}