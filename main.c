#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector3d.h"

Vector3d* generateTests(int);
void runTests(Vector3d*, int);

int main() {
    srand(time(NULL));
    int N;
    printf("Введите кол-во тестов: ");
    scanf("%d", &N);
    Vector3d* vectors = generateTests(N);
    runTests(vectors, N);
    free(vectors);
    return 0;
}

Vector3d* generateTests(int N) {
    Vector3d* vectors = malloc(sizeof(Vector3d) * N);
    if (!vectors) {
        printf("Ошибка выделения памяти!\n");
        exit(1);
    }
    for (int i = 0; i < N; i++) {
        vectors[i].x = ((double)rand() / RAND_MAX) * 20.0 - 10.0;
        vectors[i].y = ((double)rand() / RAND_MAX) * 20.0 - 10.0;
        vectors[i].z = ((double)rand() / RAND_MAX) * 20.0 - 10.0;
    }
    return vectors;
}

void runTests(Vector3d* vectors, int N) {
    printf("\nРезультаты тестов:\n");
    for (int i = 0; i < N - 1; i++) {
        Vector3d a = vectors[i];
        Vector3d b = vectors[i + 1];
        
        Vector3d s = sum(&a, &b);
        Vector3d d = sub(&a, &b);
        double dotProd = dot(&a, &b);
        Vector3d cr = cross(&a, &b);

        printf("\nТест %d:\n", i + 1);
        printf("A = (%.2f, %.2f, %.2f)\n", a.x, a.y, a.z);
        printf("B = (%.2f, %.2f, %.2f)\n", b.x, b.y, b.z);
        printf("A + B = (%.2f, %.2f, %.2f)\n", s.x, s.y, s.z);
        printf("A - B = (%.2f, %.2f, %.2f)\n", d.x, d.y, d.z);
        printf("A · B = %.2f\n", dotProd);
        printf("A × B = (%.2f, %.2f, %.2f)\n", cr.x, cr.y, cr.z);
    }
}
