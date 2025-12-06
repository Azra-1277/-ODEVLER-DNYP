#include <iostream>
#include <vector>

int toplamBegeni(const std::vector<int>& begeniler) {
    int toplam = 0;
    for (int begeni : begeniler) {
        toplam += begeni;
    }
    return toplam;
}

int main() {
    std::vector<int> begeniSayilari = {120, 85, 230, 47}; // Örnek beðeni sayýlarý
    int toplam = toplamBegeni(begeniSayilari);
    std::cout << "Toplam beðeni: " << toplam << std::endl;
    return 0;
}
