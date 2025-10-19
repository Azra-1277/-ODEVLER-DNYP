#include <iostream>
using namespace std;

// Sayýnýn 5 ile bölünüp bölünmediðini kontrol eden fonksiyon
void bolum_kontrol(int sayi) {
    if (sayi % 5 == 0) {
        cout << "tam bölünür." << endl;
    } else {
        cout << "Kalan: " << sayi % 5 << endl;
    }
}

int main() {
    int sayi;
    cout << "Bir sayi girin: ";
    cin >> sayi;

    bolum_kontrol(sayi);

    return 0;
}
