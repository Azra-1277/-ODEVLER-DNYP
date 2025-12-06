#include <iostream>
using namespace std;

// Toplama iþlemi yapan fonksiyon
int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main() {
    int sayi1 = 4;
    int sayi2 = 7;

    int sonuc = topla(sayi1, sayi2);

    cout << "Toplam: " << sonuc << endl;

    return 0;
}
