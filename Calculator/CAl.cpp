#include <iostream>

using namespace std;

void showMenu() {
    cout << "Select an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
}

double performOperation(int choice, double num1, double num2) {
    switch (choice) {
        case 1: return num1 + num2;
        case 2: return num1 - num2;
        case 3: return num1 * num2;
        case 4: 
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 0;
            }
        default:
            cout << "Invalid choice.\n";
            return 0;
    }
}

int main() {
    double num1, num2, result;
    int choice;
    char continueCalc;

    do {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        showMenu();
        cin >> choice;

        result = performOperation(choice, num1, num2);

        if (choice >= 1 && choice <= 4 && !(choice == 4 && num2 == 0)) {
            cout << "The result is: " << result << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalc;

    } while (continueCalc == 'y' || continueCalc == 'Y');

    return 0;
}
