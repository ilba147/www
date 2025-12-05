#include <iostream>
using namespace std;

int main() {
    string porol = "12345";
    

    while (true) {
        cout << "Vvedite porol: ";
        cin >> porol;

        if (porol == "12345") {
            break;
        }
        cout << "Ne correct porol: " << endl;


    }
    cout << "Dobro pozalovat! " << endl;
    return 0;
}
