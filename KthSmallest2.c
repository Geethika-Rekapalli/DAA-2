#include <stdio.h>
void sort(int a[], int n){
    int i, temp;

    if(n <= 1)
        return;

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    sort(a, n - 1);
}

int main(){
    int a[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    sort(a, n);

    printf("Kth smallest element = %d", a[k - 1]);
    return 0;
}