#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int counter = 0;
    int grade;
    cout << "Enter \"0\" to stop. " <<endl;
    cout << "Enter the Grade: " <<endl;
    cin >> grade;
    
    while (grade != 0){
        total = grade + total;
        counter++;
        cin >> grade;
    }
    
    if (counter != 0){
        int average = total / counter;
        cout<<"The average is "<<average;
    }
    else{
        cout<<"No grade were entered";
    }
    
    return 0;
}
