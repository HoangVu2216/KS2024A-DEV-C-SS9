#include <stdio.h>

int main() {
    int mang[100];
    int soPhanTu, currentLength, viTriXoa;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &soPhanTu);

    if (soPhanTu < 1 || soPhanTu > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    currentLength = soPhanTu;

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &mang[i]);
    }

    printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &viTriXoa);

    if (viTriXoa < 0 || viTriXoa >= currentLength) {
        printf("Vi tri xoa khong hop le.\n");
        return 1;
    }

    for (int i = viTriXoa; i < currentLength - 1; i++) {
        mang[i] = mang[i + 1];
    }

    currentLength--;

    printf("Mang sau khi xoa: \n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

