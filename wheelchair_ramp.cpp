#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int exit_value = 1;

    while (exit_value == 1) {
        double a, b, c;
        
        cout << "Please give two values, a and b respectively.\n" << endl;
        cout << "Or input 0 in one of the values to exit the program." << endl;
        cout << "Give the value of [a]" << endl;
        cin >> a;
        cout << "Give the value of [b]" << endl;
        cin >> b;

        if (a == 0 || b == 0) {
            exit_value = 0;
            break;
        }

        double hypotenuse = sqrt((a * a) + (b * b));

        cout << "The length of the ramp is: " << hypotenuse << endl;

    }
}