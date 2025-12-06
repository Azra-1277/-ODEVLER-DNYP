#include <iostream>
#include <fstream>  // Dosya iþlemleri için gerekli kütüphane
using namespace std;

int main() {
    ofstream dosya("tek_sayilar_toplami.txt"); // Dosya oluþturma veya açma

    if (!dosya) {
        cerr << "Dosya olusturulamadi!" << endl;
        return 1;
    }

    int toplam = 0;

    // 1 ile 100 arasýndaki tek sayýlarý bul ve topla
    for (int i = 1; i <= 100; i += 2) {
        toplam += i;
    }

    // Toplamý dosyaya yaz
    dosya << "1 ile 100 arasindaki tek sayilarin toplami: " << toplam << endl;
    dosya.close();

    cout << "Toplam dosyaya yazildi: tek_sayilar_toplami.txt" << endl;

    return 0;
}
