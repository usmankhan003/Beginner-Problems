#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    if (n > 0) { // Check if the number is positive
        // Calculate the sum of multiples of 3 or 5

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }

        cout << "The sum of multiples of 3 or 5 from 1 to " << n << " is: " << sum << endl;
    } else {
        // the case where n is not positive
        cout << "Please enter a positive number." << endl;
    }

    return 0;
}