#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i, addValue, addIndex, currentLength;

    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = n; 

    printf("Nhap gia tri can them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri can them (tu 0 den %d): ", 100);
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    if (addIndex >= currentLength) {

        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mang sau khi them phan tu:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

