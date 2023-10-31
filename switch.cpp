#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    switch(grade) {
        case 'A' :
             cout << "Excellent !" <<endl;
             //break;
        case 'B' :
             cout << "Very good! "<<endl;
             break;
        case 'C' :
             cout << " Well done"<<endl;
             break;
        case 'D' :
             cout << "You passed" <<endl;
             break;
        case 'F' :
             cout << "Better, Try again "<<endl;
             break;
        default :
            cout << "Invalid Grade "<<endl;
        
    }
    return 0;
}