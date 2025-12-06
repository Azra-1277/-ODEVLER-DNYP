#include <iostream>
using namespace std;

class Drone {
private:
    int yuk;
    int hiz;
    int yukseklik;
    int pil;

public:
    Drone() {
        cout << "Drone oluþturuldu." << endl;
    }

    ~Drone() {
        cout << "Drone testi tamamlandi ve bellekten silindi." << endl;
    }

    void setDegerler(int y, int h, int ys, int p) {
        yuk = y;
        hiz = h;
        yukseklik = ys;
        pil = p;
    }

    void bilgileriGoster() {
        cout << "Yük: " << yuk
             << " | Hýz: " << hiz
             << " | Yükseklik: " << yukseklik
             << " | Pil: " << pil << "%" << endl;
    }
};

int main() {
    Drone d1, d2, d3;

    d1.setDegerler(300, 80, 120, 75);
    d2.setDegerler(450, 95, 180, 60);
    d3.setDegerler(200, 70, 90, 85);

    d1.bilgileriGoster();
    d2.bilgileriGoster();
    d3.bilgileriGoster();

    return 0;
}

