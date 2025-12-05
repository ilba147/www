#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    int sum = 0;

    while (true) {
        cout << "Vvedite chislo: ";
        cin >> number;

        if (number == 0) {
            break;
        }
        count++;
        sum += number;


    }

    cout << "Sr arehmetic: " << (sum / count) << endl;

    return 0;
}
