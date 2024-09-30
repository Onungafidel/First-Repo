#include <iostream>
using namespace std;

double multiples(int a, int b) {
    if (a == 0) {
        return false;
    }
    return (b % a == 0);
}

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    double result = multiples(num1, num2);

    if (result) {
        cout << num2 << " is a multiple of " << num1 << endl;
    } else {
        cout << num2 << " is NOT a multiple of " << num1 << endl;
    }

    return 0;
}#include <iostream>
using namespace std;

// Function to check if second integer is a multiple of the first
double multiples(int a, int b) {
    // Check if a is not zero to prevent division by zero error
    if (a == 0) {
        return false; // Convention: zero is not considered a multiple of any number
    }
    return (b % a == 0);
}

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Call the multiples function and store the result
    double result = multiples(num1, num2);

    // Display the result to the user
    if (result) {
        cout <<"tru
    } else {
        cout << num2 << "false" << num1 << endl;
    }

    return 0;
}