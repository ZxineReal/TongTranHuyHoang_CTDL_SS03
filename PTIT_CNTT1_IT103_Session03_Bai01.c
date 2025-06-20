#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So luong phan tu khong duoc am");
        return 0;
    } else if (n == 0) {
        printf("So luong phan tu phai lon hon 0");
        return 0;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap vao phan tu tai vi tri %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("So thu %d = %d\n",i, arr[i]);
    }
    free(arr);
    return 0;
}
