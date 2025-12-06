#include <stdio.h>

int main()
{
    float yuk, hiz, yukseklik;
    int pil;

    printf("Drone'un tasiyacagi yuk (gr): ");
    scanf("%f", &yuk);

    printf("Drone hizi (m/s): ");
    scanf("%f", &hiz);

    printf("Drone yuksekligi (m): ");
    scanf("%f", &yukseklik);

    printf("Pil seviyesi (%%): ");
    scanf("%d", &pil);

    // 1) Yük kontrolü
    if (yuk > 500) {
        printf("Asiri yuk! Ucmayiniz.\n");
        return 0;
    }

    // 2) Pil kontrolü
    if (pil < 30) {
        printf("Pil seviyesi dusuk! Ucus guvenli degil.\n");
        return 0;
    }

    // 3) Hiz kontrolü
    if (hiz > 20) {
        printf("Ruzgar guclu veya hiz cok yuksek! Ucus guvenli degil.\n");
        return 0;
    }

    // 4) Yukseklik kontrolü
    if (yukseklik > 200) {
        printf("Yukseklik guvenli degil!\n");
        return 0;
    }

    // Tüm kontroller geçildiyse
    printf("Ucus guvenli! Kalan pil: %d%%\n", pil);

    return 0;
}
