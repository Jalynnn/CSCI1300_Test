#include<iostream>

using namespace std;

int main() {
    // You can skip break statements as a way to list multiple options that should do the same code, like this:​
    char grade = 'b';

    switch(grade){
        case 'a':
        case 'b':
        case 'c':
            cout << "You passed!" << endl;
            break;;
        case 'd':
            cout << "You did not pass, but you were close." << endl;
            break;
        case 'f':
            cout << "You failed." << endl;
            break;
        default:
            cout << "That is not a valid grade." << endl;
    }
}