#include <stdio.h>

int main() {
    int mang[100];
    int currentLength = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
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
        } else if (luaChon == 4) {
            if (currentLength == 0) {
                printf("Mang rong, khong co phan tu de sua.\n");
            } else {
                int viTri, giaTri;
                printf("Nhap vi tri can sua (0-%d): ", currentLength - 1);
                scanf("%d", &viTri);

                if (viTri < 0 || viTri >= currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &giaTri);

                    mang[viTri] = giaTri;
                }
            }
        } else if (luaChon == 5) {
            if (currentLength == 0) {
                printf("Mang rong, khong co phan tu de xoa.\n");
            } else {
                int viTri;
                printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
                scanf("%d", &viTri);

                if (viTri < 0 || viTri >= currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = viTri; i < currentLength - 1; i++) {
                        mang[i] = mang[i + 1];
                    }

                    currentLength--;
                }
            }
        } else if (luaChon == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le.\n");
        }
    } while (luaChon != 6);

    return 0;
}

