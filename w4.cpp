#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;

    cout << "Vedite chislo: ";
    cin >> number;

    while (number > 0) {
        count++;
        number /= 10;
    }

    cout << "Klichestvo cifer: " << count << endl;
    return 0;
}
