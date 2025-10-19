#include <iostream>
using namespace std;

void ekrana_yaz() {
    // 10 kez "deneyap" yaz
    for (int i = 0; i < 10; i++) {
        cout << "deneyap" << endl;
    }

    // 2 kez "Merhaba!" yaz
    for (int i = 0; i < 2; i++) {
        cout << "Merhaba!" << endl;
    }
}

int main() {
    ekrana_yaz(); // Fonksiyonu çaðýr
    return 0;
}
