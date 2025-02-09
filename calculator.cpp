#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu() {
    cout << "Calculator Menu:" << endl;
    cout << "1. Sum" << endl;
    cout << "2. Divide" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Subtract" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

void performOperation(int choice) {
    double num1, num2, result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            performOperation(choice);
        }
    } while (choice != 5);

    return 0;
}