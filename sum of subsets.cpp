#include <stdio.h>

void sumOfSubsets(int arr[], int n) {
    int total = 1 << n; 
    printf("Sum of all subsets:\n");

    for (int i = 0; i < total; ++i) {
        int sum = 0;
        printf("{");
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                printf("%d ", arr[j]);
                sum += arr[j];
            }
        }
        printf("} Sum: %d\n", sum);
    }
}

int main() {
    int n;
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    sumOfSubsets(arr, n);

    return 0;
}

