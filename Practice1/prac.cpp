#include <iostream>

using namespace std;

int main() {

    int size;
    string s;
    int i;
    cout << "Please input a string and a size integer" << endl;

    cout << "Size?: " << endl;
    cin >> size;
    if (size > 1) {
        cout << "String?: " << endl;
        cin >> s;
        for (int i = 0; s.length() > i; i++) {

            for (int a = 0; a < size; a++) {
            }
        }
    }
    else {
        cout << "Please enter a size larger than 0" << endl;
    }
}