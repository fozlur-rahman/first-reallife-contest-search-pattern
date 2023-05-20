#include <stdio.h>

int findPosition(int a[], int size, int num) {

    for (int i = 0; i < size; i++) {
        if (a[i] == num) {
            return i + 1;  
        }
    }
    return -1;  
}

int main() {
    int t;
    scanf("%d", &t);

    int casenum;
    for (casenum = 1; casenum <= t; casenum++) {
        int n;
        scanf("%d", &n);

        int a[n];
   
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int s;

        scanf("%d", &s);

        int position = findPosition(a, n, s);

        if (position != -1) {
            printf("Case %d: %d\n", casenum, position);
        } else {
            printf("Case %d: Not Found\n", casenum);
        }
    }

    return 0;
}