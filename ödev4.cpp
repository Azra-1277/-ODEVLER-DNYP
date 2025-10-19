#include <iostream>
using namespace std;

// Küçük olan sayýyý döndüren fonksiyon
int kucukBul(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int sayi1, sayi2;

    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    int sonuc = kucukBul(sayi1, sayi2);
    cout << "Kucuk olan sayi: " << sonuc << endl;

    return 0;
}
