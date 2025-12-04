#include <iostream>
using namespace std;

int main() {
    int number;
    int total = 0;

    while (true) {
        cout << "Vvedite chislo: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        total += number;
    }

    cout << "Summa: " << total << endl;

    return 0;
}
