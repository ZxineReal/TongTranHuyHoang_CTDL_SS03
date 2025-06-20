#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;
    int average = 0;
    int count = 0;

    printf("Moi ban nhap vao so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong phan tu khong hop le!");
        return 0;
    }
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu tai vi tri %d: ",i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    average = sum / count;
    printf("average = %d", average);
    free(arr);
    return 0;
}