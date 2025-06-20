#include <stdio.h>
#include <stdlib.h>

void findMaxMin(int *arr[], int rows, int cols);

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
    } else if (cols <= 0) {
        printf("So cot khong hop le!");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le!");
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
            printf("Moi ban nhap vao phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    findMaxMin(arr,rows,cols);

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

void findMaxMin(int *arr[], int rows, int cols) {
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("Max = %d, Min = %d", max, min);
}