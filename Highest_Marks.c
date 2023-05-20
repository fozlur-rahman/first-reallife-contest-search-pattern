#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int hm = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > hm)
        {
            hm = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", hm - a[i]);
    }

    return 0;
}