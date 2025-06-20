#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int max;
    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So luong phan tu khong duoc am");
        return 0;
    } else if (n == 0) {
        printf("SO luong phan tu phai lon hon 0");
        return 0;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu tai vi tri %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        max = arr[0];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max = %d", max);
    free(arr);
    return 0;
}