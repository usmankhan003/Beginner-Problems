#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;

    // Ask for the user's first name
    cout << "Enter your first name: " << endl;
    cin >> firstName;

    // Check if the name is Alice or Bob
    if (firstName == "Alice" || firstName == "Bob") {
        cout << "Welcome, Alice & Bob " << firstName << "!" << endl;
    } else {
        cout << "Access denied." << endl;
    }

    return 0;
}
