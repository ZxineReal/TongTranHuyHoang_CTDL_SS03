#include <stdio.h>
#include <stdlib.h>

void findMainDiagon(int *arr[], int rows, int cols);
void findSecondDiagon(int *arr[], int rows, int cols);

int main() {
    int rows;
    int cols;
    printf("Moi ban nhap vao so hang: ");
    scanf("%d", &rows);
    printf("Moi ban nhap vao so cot: ");
    scanf("%d", &cols);

    if (rows <= 0 && cols <= 0) {
        printf("So cot va so hang khong hop le!");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le!");
        return 0;
    } else if (cols <= 0) {
        printf("So cot khong hop le!");
        return 0;
    }

    int** arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho dong!");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Moi ban nhap vao phan tu tai vi tri [%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    findMainDiagon(arr, rows, cols);
    findSecondDiagon(arr, rows, cols);

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

void findMainDiagon(int *arr[], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    printf("Tong duong cheo chinh: %d\n", sum);
}

void findSecondDiagon(int *arr[], int rows, int cols) {
    if (rows != cols) {
        printf("Khong ton tai duong cheo phu!\n");
        return;
    }
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][rows - i - 1];
    }
    printf("Tong duong cheo phu: %d\n", sum);
}