#include <stdio.h>

int main() {
    int mang[5] = {1, 2, 3, 4, 5};
    int vitri, giatri;

    printf("Mang hien tai: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (0-4): ");
    scanf("%d", &vitri);

    if (vitri < 0 || vitri >= 5) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &giatri);

    mang[vitri] = giatri;

    printf("Mang sau khi sua: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

