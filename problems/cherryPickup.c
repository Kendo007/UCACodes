#include <stdio.h>
#include <assert.h>

typedef struct {
    int x;
    int y;
} loc;

loc arr[100];

void printAll(loc arr[], int till) {
    printf("Path: ");
    for (int i = 0; i < till; i++) {
        if (arr[i].x == -1) {
            break;
        }
        printf("(%d, %d) ", arr[i].x, arr[i].y);
    }

    printf("\n");
}

int pickup(int m, int n, int x, int y, int sum, int map[m][n]) {
    // arr[till].x = x;
    // arr[till].y = y;

    if (x == m - 1 && y == n - 1) {
        // printAll(arr, till);
        return sum + map[x][y];
    } else if (x == m - 1) {
        return pickup(m, n, x, y + 1, sum + map[x][y], map);
    } else if (y == n - 1) {
        return pickup(m, n, x + 1, y, sum + map[x][y], map);
    } else {
        int ans1, ans2;
        
        ans1 = pickup(m, n, x + 1, y, sum + map[x][y], map);
        ans2 = pickup(m, n, x, y + 1, sum + map[x][y], map);

        return ans1 < ans2 ? ans1 : ans2;
    }
}

int main() {
    // Test case
    int m = 4, n = 4;
    int map[4][4] = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 1},
    };

    printf("%d\n", pickup(m, n, 0, 0, 0, map));

    return 0;
}