#include <iostream>
using namespace std;

int main() {
    int a, b;


    cout << "Enter two numbers for addition: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;


    cout << "Enter two numbers for subtraction: ";
    cin >> a >> b;
    cout << "Difference: " << a - b << endl;


    cout << "Enter two numbers for multiplication: ";
    cin >> a >> b;
    cout << "Product: " << a * b << endl;


    cout << "Enter two numbers for division: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Quotient: " << (float)a / b << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;

    return 0;
}

