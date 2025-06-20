#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int m;
    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr==NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap vao phan tu tai vi tri %d:", i);
        scanf("%d", &arr[i]);
    }
    printf("Moi ban nhap vao so luong phan tu muon them: ");
    scanf("%d", &m);

    arr = (int*)realloc(arr,(m + n) * sizeof(int));
    if (arr==NULL) {
        printf("Khong the cap phat lai bo nho dong!");
        return 0;
    }

    for (int i = 0; i < m; i++) {
        printf("Moi ban nhap vao phan tu tai vi tri %d: ", n + i);
        scanf("%d", &arr[n + i]);
    }
    n += m;

    printf("Mang sau khi them la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}