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

    cout << "Kolichestvo chisel: " << count << endl;
    cout << "Summa: " << sum << endl;

    return 0;
}
