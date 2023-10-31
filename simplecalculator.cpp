#include <iostream>
using namespace std;

int main () {
  char op;
  int a;
  int b;
    cout << "input number: "; cin >> a >> b;

    cout  << "Enter an operator ( +, -, *, /) : ";
    cin >> op;

    switch(op) {
        case '+':
          cout << a << "+" << b << "=" <<(a + b);
          break;  
        case '-':
          cout << a << "-" << b << "=" <<(a - b);
          break; 
        case '*':
          cout << a << "*" << b << "=" <<(a * b);
          break; 
        case '/':
          cout << a << "/" << b << "=" <<(a / b);
          break;  
        default:
          cout << "Invalid Input!!"; 
    } 
    
    
   return 0; 

}