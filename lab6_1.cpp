#include<iostream>
using namespace std;

int main(){

    int p;
    int even = 0;
    int odd = 0;

    cout << "Enter an integer: ";
    cin >> p;
    while (p != 0)
    {
        if (p % 2 == 0){
            even += 1;
        }
        else {
            odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> p;

    }
    

    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd ;
    return 0;
}
