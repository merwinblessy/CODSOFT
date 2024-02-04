CALCULATOR


#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char op;
    char choice;

    do {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operator (+, -, *, /): ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "The sum is: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The difference is: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "The product is: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "The quotient is: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended" << endl;

    return 0;
}