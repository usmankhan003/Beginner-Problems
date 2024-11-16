#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName;

    // Ask for the user's first name
    cout << "Enter your first name: " << endl;
    cin >> firstName;

    // Ask for the user's last name
    cout << "Enter your last name: " << endl;
    cin >> lastName;

    // Greet the user with their full name
    cout << "Hello, " << firstName << " " << lastName << "! Welcome!" << endl;

    return 0;
}
