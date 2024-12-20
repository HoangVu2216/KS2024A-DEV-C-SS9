#include <stdio.h>

int main() {
    int mang[100];
    int currentLength = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        if (luaChon == 1) {
            printf("Nhap so phan tu muon nhap (toi da 100): ");
            scanf("%d", &currentLength);

            if (currentLength < 1 || currentLength > 100) {
                printf("So phan tu khong hop le.\n");
                currentLength = 0;
                continue;
            }

            printf("Nhap cac phan tu cua mang: \n");
            for (int i = 0; i < currentLength; i++) {
                printf("Phan tu [%d]: ", i);
                scanf("%d", &mang[i]);
            }
        } else if (luaChon == 2) {
            if (currentLength == 0) {
                printf("Mang rong.\n");
            } else {
                printf("Cac phan tu cua mang: \n");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
            }
        } else if (luaChon == 3) {
            int tong = 0;
            printf("Cac phan tu chan trong mang: \n");
            for (int i = 0; i < currentLength; i++) {
                if (mang[i] % 2 == 0) {
                    printf("%d ", mang[i]);
                    tong += mang[i];
                }
            }
            printf("\nTong cac phan tu chan: %d\n", tong);
        } else if (luaChon == 4) {
            if (currentLength == 0) {
                printf("Mang rong.\n");
            } else {
                int max = mang[0], min = mang[0];
                for (int i = 1; i < currentLength; i++) {
                    if (mang[i] > max) max = mang[i];
                    if (mang[i] < min) min = mang[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
            }
        } else if (luaChon == 5) {
            int tong = 0;
            printf("Cac phan tu la so nguyen to trong mang: \n");
            for (int i = 0; i < currentLength; i++) {
                int n = mang[i];
                int laNguyenTo = 1;
                if (n < 2) laNguyenTo = 0;
                for (int j = 2; j * j <= n && laNguyenTo; j++) {
                    if (n % j == 0) {
                        laNguyenTo = 0;
                    }
                }
                if (laNguyenTo) {
                    printf("%d ", n);
                    tong += n;
                }
            }
            printf("\nTong cac so nguyen to: %d\n", tong);
        } else if (luaChon == 6) {
            int soCanTim, dem = 0;
            printf("Nhap vao mot so can thong ke: ");
            scanf("%d", &soCanTim);

            for (int i = 0; i < currentLength; i++) {
                if (mang[i] == soCanTim) {
                    dem++;
                }
            }
            printf("So %d xuat hien %d lan trong mang.\n", soCanTim, dem);
        } else if (luaChon == 7) {
            if (currentLength >= 100) {
                printf("Mang da day, khong the them phan tu.\n");
            } else {
                int viTri, giaTri;
                printf("Nhap vi tri muon them (0-%d): ", currentLength);
                scanf("%d", &viTri);

                if (viTri < 0 || viTri > currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &giaTri);

                    for (int i = currentLength; i > viTri; i--) {
                        mang[i] = mang[i - 1];
                    }

                    mang[viTri] = giaTri;
                    currentLength++;
                }
            }
        } else if (luaChon == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le.\n");
        }
    } while (luaChon != 8);

    return 0;
}

