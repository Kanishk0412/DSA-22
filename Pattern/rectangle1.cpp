#include<iostream>
using namespace std;

int main() {

    int row, col;
    cout << "Enter the Number of Rows: " ;
    cin >> row;
    cout << "Enter the Number of Columns: ";
    cin >> col ;
    cout << "\n" << endl;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "* " ;
        }
        cout << endl;        
    }
    
     return 0;
}