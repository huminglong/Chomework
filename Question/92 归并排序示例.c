#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE* A = fopen("A.txt", "r");
    FILE* B = fopen("B.txt", "r");
    FILE* C = fopen("C.txt", "w");

    int x;
    int y;

    fscanf(A, "%d", &x);
    fscanf(B, "%d", &y);

    while (true) {
        if (x < y) {
            fprintf(C, "%d ", x);
            int z = fscanf(A, "%d", &x);
            if (z == EOF) {
            if (feof(A)) {
                    while (!feof(B)) {
                        fscanf(B, "%d", &y);
                        fprintf(C, "%d ", y);
                    }
                break;
            }
        } else {
            把 y 写到 C;
            从 B 中读取 y;
            if (读到了 EOF) {
                不断地从 A 中读取 x
                并写入 C
                直到读到 EOF 为止
                break;
            }
        }
    }

    if (fclose(A));
    fclose(B);
    fclose(C);



    return 0;
}





