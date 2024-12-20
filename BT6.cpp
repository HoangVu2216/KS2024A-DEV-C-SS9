#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX][MAX], n, m;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so dong: ");
            scanf("%d", &n);
            printf("Nhap so cot: ");
            scanf("%d", &m);

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("Nhap phan tu arr[%d][%d]: ", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%d\t", arr[i][j]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            int tong = 0;
            printf("Cac phan tu le: ");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (arr[i][j] % 2 != 0) {
                        printf("%d ", arr[i][j]);
                        tong += arr[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", tong);
        } else if (choice == 4) {
            int tich = 1;
            printf("Cac phan tu tren bien: ");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                        printf("%d ", arr[i][j]);
                        tich *= arr[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu tren bien: %d\n", tich);
        } else if (choice == 5) {
            if (n != m) {
                printf("Khong co duong cheo chinh (ma tran khong vuong).\n");
            } else {
                printf("Cac phan tu tren duong cheo chinh: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
            }
        } else if (choice == 6) {
            if (n != m) {
                printf("Khong co duong cheo phu (ma tran khong vuong).\n");
            } else {
                printf("Cac phan tu tren duong cheo phu: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i][n - i - 1]);
                }
                printf("\n");
            }
        } else if (choice == 7) {
            int maxTong = -1, dongMax = 0;
            for (int i = 0; i < n; i++) {
                int tong = 0;
                for (int j = 0; j < m; j++) {
                    tong += arr[i][j];
                }
                if (tong > maxTong) {
                    maxTong = tong;
                    dongMax = i;
                }
            }
            printf("Dong co tong lon nhat la dong %d voi tong = %d\n", dongMax, maxTong);
        } else if (choice == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

