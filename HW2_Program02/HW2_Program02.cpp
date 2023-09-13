//=========================================================
// //Author: Jack Grimes
// //Date: 09-13-23
// //Desc: favorite city
//=========================================================

#include <iostream>

using namespace std;
int main() {
    string city;
    int position;
    char letter;

    cout << "Input your favorite city: ";
    cin >> city;

    cout << "Which character would you like to display: ";
    cin >> position;
    cout << "The user entered: " << city << endl;

    letter = city.at(position);
    cout << "The character at position " << position << " is: " << letter;
}
