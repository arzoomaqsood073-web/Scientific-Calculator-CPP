#include <iostream>
#include <cmath> // Added for math functions
#include <cstdlib>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Operators: +, -, *, /, s (sqrt), l (log): ";
    cin >> op;

    if (op == 's') {
        cout << "Enter number: ";
        cin >> num1;
        if (num1 >= 0)
            cout << "Square Root: " << sqrt(num1) << endl;
        else
            cout << "Error! Cannot square root a negative number." << endl;
    } 
    else if (op == 'l') {
        cout << "Enter number: ";
        cin >> num1;
        if (num1 > 0)
            cout << "Logarithm (base e): " << log(num1) << endl;
        else
            cout << "Error! Log is only for positive numbers." << endl;
    }
    else {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        // ... your existing switch statement for +, -, *, / ...
    }

    system("pause");
    return 0;
}

