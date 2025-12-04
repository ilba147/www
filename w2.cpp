#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Vvedite chislo: ";
    cin >> number;

    while (number > 0) {
        cout << "Otsot: " << number << endl;
        number--;
    }

    cout << "start!" << endl;
    return 0;
}
