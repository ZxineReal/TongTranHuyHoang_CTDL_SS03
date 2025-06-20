#include <stdio.h>
#include <stdlib.h>

void sumRow(int *arr[], int rows, int cols, int k);

int main() {
    int rows;
    int cols;
    int k;

    printf("Moi ban nhap vao so hang: ");
    scanf("%d", &rows);
    printf("Moi ban nhap vao so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 && cols <= 0) {
        printf("So hang va so cot khong hop le!\n");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le!\n");
        return 0;
    } else if (cols <= 0) {
        printf("So cot khong hop le!\n");
        return 0;
    }

    int** arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!\n");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Moi ban nhap vao phan tu tai vi tri [%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Moi ban nhap vao hang muon tinh tong: ");
    scanf("%d", &k);
    if (k > rows || k < 0) {
        printf("Hang can tinh khong ton tai!\n");
    } else {
        sumRow(arr, rows, cols, k);
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

void sumRow(int *arr[], int rows, int cols, int k) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[k-1][j];
    }
    printf("sum = %d\n", sum);
}
