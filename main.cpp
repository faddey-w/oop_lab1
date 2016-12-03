#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float compute_f(const vector<float>&);

int main(int argc, char *argv[]) {

    // parse command line arguments as elements of input array
    vector<float> arr;
    for(int i = 1; i < argc; i++) {
        try {
            arr.push_back(stof(argv[i]));
        } catch(invalid_argument) {
            cerr << "Invalid input at position " << i
                 << ": " << argv[i] << endl;
            return 1;
            exit
        }
    }

    // compute and print the result
    cout << compute_f(arr) << endl;

    return 0;
}


float compute_f(const vector<float> &arr) {
    float cust_sum = 0;
    for(int i = 1; i < arr.size(); i += 2) {
        cust_sum += arr[i];
    }
    return arr.size() + (cust_sum / M_PI);
}
