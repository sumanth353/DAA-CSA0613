#include<stdio.h>
void main()
{
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n]; 
    
    for (i = 0; i < n; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("The original array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nThe sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

