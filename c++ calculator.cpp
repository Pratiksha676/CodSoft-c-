#include<iostream>
using namespace std;
int main() {
    char op;
    double num1,num2;

    cout <<"Enter an operator(+,-,*,/): ";
    cin>> op;
     
    cout<<"Enter two numbers: ";
    cin>> num1 >>num2;

    switch(op) {
        case '+':
        cout << num1 <<" + "<< num2 <<" = " << num1 + num2;
        break;
        case '-':
        cout << num1 <<" - "<< num2 <<" = " << num1 - num2;
        break;
        case '*':
        cout << num1 <<" * "<< num2 <<" = " << num1 * num2;
        break;
        case '/':
        if(num2 != 0)
        cout << num1 <<" / "<< num2 <<" = " << num1 / num2;
        else 
        cout<<"Division by Zero is not allowed";
        break;
        default:
        cout <<"Invalid operator";
    }
    return 0;
}