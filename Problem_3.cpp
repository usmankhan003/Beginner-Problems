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
        cout << "Welcome,  " << firstName << "!" << endl;
    } else {
        cout << "Sorry! You are not Alice & Bob" << endl;
    }

    return 0;
}
