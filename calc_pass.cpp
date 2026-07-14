#include <iostream>
using namespace std;

int main(){
    string mpass, pass;
    int numOne, numTwo, sum;
    cout << "Create a Password: ";
    cin >> pass;
    cout << "Enter two numbers to add: \n";
    cin >> numOne >> numTwo;
    cout << "\nEnter the password to see the Result ";
    cin >> mpass;
    if (mpass == pass){
        sum = numOne + numTwo;
        cout << endl <<numOne << " + " << numTwo<< " = " << sum;
    }
    else{
        cout << "\nSorry! You've entered a Wrong Password";
        cout << endl;
    }
    return 0;
}
