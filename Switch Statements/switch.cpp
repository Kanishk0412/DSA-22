#include<iostream>
using namespace std;

int main() {

    char button;
    cout << "Input a Character: " ;
    cin >> button;

     switch (button)
     {
     case 'a':
        cout << "Hello World" << endl;
         break;
     
     default:
        cout << "Wrong Input" << endl;
         break;
     }


    return 0;
}