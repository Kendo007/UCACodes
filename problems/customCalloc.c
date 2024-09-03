#include <stdio.h>
#include <stdlib.h>

void* customCalloc(int n) {
    void* ptr = malloc(n);

    for (int i = 0; i < n; ++i) {
        char* currPoint = ptr + i;
        *currPoint = 0;
    }

    return ptr;
}

int main() {
    int* n = customCalloc(4);
    printf("%d\n", *n);

    free(n);

    return 0;
}