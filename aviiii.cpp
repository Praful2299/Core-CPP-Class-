#include<iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using for loop
    int factorial_for = 1;
    for (int i = 1; i <= num; ++i) {
        factorial_for *= i;
    }
    cout << "Factorial using for loop: " << factorial_for << endl;

    // Using infinite while loop
    int factorial_while = 1;
    int counter = 1;
    while (true) {
        factorial_while *= counter;
        counter++;
        if (counter > num) {
            break;
        }
    }
    cout << "Factorial using while loop: " << factorial_while << endl;

    return 0;
}
