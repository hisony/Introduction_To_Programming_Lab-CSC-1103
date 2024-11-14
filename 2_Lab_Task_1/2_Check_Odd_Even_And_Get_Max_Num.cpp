#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;


    if (num1 % 2 == 0)
        cout << num1 << " is even." << endl;
    else
        cout << num1 << " is odd." << endl;

    if (num2 % 2 == 0)
        cout << num2 << " is even." << endl;
    else
        cout << num2 << " is odd." << endl;

    ;
    if(num1 > num2){
      cout<<"Number 1 is maximum"<<endl;
    }else if(num1==num2){
        cout<<"Two number is equal"<<endl;
    } else{
        cout<<"Number 2 is maximum"<<endl;
    }

    return 0;
}

