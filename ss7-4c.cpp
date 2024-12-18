#include <stdio.h>

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Các phần tử trong mảng là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
