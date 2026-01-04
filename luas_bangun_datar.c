#include <stdio.h>

int main() {
    int pilihan;
    float luas, sisi_a, sisi_b, sisi_c, panjang, lebar, jari_jari;
    const float PI = 3.14159;

    printf("Pilih bangun datar untuk menghitung luas\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Segitiga\n");
    printf("5. Jajar Genjang\n");
    printf("6. Trapesium\n");
    printf("7. Belah Ketupat\n");
    printf("8. Layang-Layang\n");
    printf("9. Poligon\n");
    printf("10. Ellips\n");
    printf("=====================================\n");
    printf("Masukkan pilihan (1-10): ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan panjang sisi persegi: ");
            scanf("%f", &sisi_a);
            luas = sisi_a * sisi_a;
            printf("Luas Persegi: %.2f\n", luas);
            break;
        case 2:
            printf("Masukkan panjang persegi panjang: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar persegi panjang: ");
            scanf("%f", &lebar);
            luas = panjang * lebar;
            printf("Luas Persegi Panjang: %.2f\n", luas);
            break;
        case 3:
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%f", &jari_jari);
            luas = PI * jari_jari * jari_jari;
            printf("Luas Lingkaran: %.2f\n", luas);
            break;
        case 4:
            printf("Masukkan alas segitiga: "); 
            scanf("%f", &sisi_a);
            printf("Masukkan tinggi segitiga: ");
            scanf("%f", &sisi_b);
            luas = 0.5 * sisi_a * sisi_b;
            printf("Luas Segitiga: %.2f\n", luas);
            break;
        case 5:
            printf("Masukkan alas jajar genjang: ");
            scanf("%f", &sisi_a);
            printf("Masukkan tinggi jajar genjang: ");
            scanf("%f", &sisi_b);
            luas = sisi_a * sisi_b;
            printf("Luas Jajar Genjang: %.2f\n", luas);
            break;
        case 6:
            printf("Masukkan sisi sejajar pertama: ");
            scanf("%f", &sisi_a);
            printf("Masukkan sisi sejajar kedua: ");
            scanf("%f", &sisi_b);
            printf("Masukkan tinggi trapesium: ");
            scanf("%f", &sisi_c);
            luas = 0.5 * (sisi_a + sisi_b) * sisi_c;
            printf("Luas Trapesium: %.2f\n", luas);
            break;
        case 7:
            printf("Masukkan diagonal 1 belah ketupat: ");
            scanf("%f", &sisi_a);
            printf("Masukkan diagonal 2 belah ketupat: ");
            scanf("%f", &sisi_b);
            luas = 0.5 * sisi_a * sisi_b;
            printf("Luas Belah Ketupat: %.2f\n", luas);
            break;
        case 8:
            printf("Masukkan diagonal 1 layang-layang: ");
            scanf("%f", &sisi_a);
            printf("Masukkan diagonal 2 layang-layang: ");
            scanf("%f", &sisi_b);
            luas = 0.5 * sisi_a * sisi_b;
            printf("Luas Layang-Layang: %.2f\n", luas);
            break;
        case 9:
            {
                int n, i;
                float apotema, sisi, perimeter = 0.0;
                printf("Masukkan jumlah sisi poligon: ");
                scanf("%d", &n);
                printf("Masukkan panjang sisi poligon: ");
                scanf("%f", &sisi);
                printf("Masukkan apotema poligon: ");
                scanf("%f", &apotema);
                perimeter = n * sisi;
                luas = 0.5 * perimeter * apotema;
                printf("Luas Poligon: %.2f\n", luas);
            }
        case 10:
            printf("Masukkan panjang sumbu mayor ellips: ");
            scanf("%f", &sisi_a);
            printf("Masukkan panjang sumbu minor ellips: ");
            scanf("%f", &sisi_b);
            luas = PI * sisi_a * sisi_b;
            printf("Luas Ellips: %.2f\n", luas);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }
}