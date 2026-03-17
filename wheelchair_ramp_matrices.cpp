#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<double> ramp_length(0);
    int index = 1;

    double a_values[] = {2.3, 2, 6, 7, 9};
    double b_values[] = {2.9, 4, 67, 2, 71};

    int array_size = sizeof(a_values) / sizeof(a_values[0]);
    for (int i = 0; i < array_size; i++) {
        double hypotenuse = sqrt((a_values[i] * a_values[i]) 
        + (b_values[i] * b_values[i]));

        ramp_length.push_back(hypotenuse);

    }

    cout << "These are the ramp lengths for each index: \n";
    for (double hypo : ramp_length) {
        
        cout << hypo << " <- Value " << index << endl; 

        index++;
    }

}