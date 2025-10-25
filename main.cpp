#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    float number1,number2,r;
    char operation;
    cout << "Enter first number:\n ";
    cin >> number1;
    cout << "Enter second number\n ";
    cin >> number2;
    cout << "Enter operation:\n ";
    cin >> operation;
    switch (operation){
    case '+': r = (number1 + number2);break;
    case '-': r = (number1-number2);break;
    case '*': r = (number1*number2);break;
    case '/':
        if (number2 != 0)
            r = (number1/number2);
        else {
            cout <<"Error:Division by zero";
            return NAN;
        }
        break;
    case '^': r = pow(number1,number2);break;
    case 's':
        if(number1<0 || number2==0){
            return NAN;
        }
        else{
            r = pow(number1,1.0/number2);
        }
        break;
    }
    cout << "Result:\n" << r;
    return 0;
}
