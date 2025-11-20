//Rotate an array to the right by k positions.
#include<stdio.h>
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}       
int main(void){ 
    int n, i, k;    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }   
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; // In case k is greater than n
    // Reverse the entire array
    reverse(arr, 0, n - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
    printf("The array after rotating to the right by %d positions is:\n", k);
    for(i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;   
}   
