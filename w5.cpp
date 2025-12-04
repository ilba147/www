#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;

    cout << "Vedite chislo: ";
    cin >> number;

    while (count <= 10) {
        cout << number << " * " << count << " = " << (number * count) << endl;
        count++;
    }

    return 0;
}
