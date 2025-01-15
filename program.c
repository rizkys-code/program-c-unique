#include <stdio.h>

int main() {
    int i, j, n;

    // Meminta pengguna untuk memasukkan jumlah baris
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    // Mencetak pola bintang
    for(i = 1; i <= n; i++) {
        // Mencetak spasi
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Mencetak bintang
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Pindah ⬤
        printf("\n");
    }
}
