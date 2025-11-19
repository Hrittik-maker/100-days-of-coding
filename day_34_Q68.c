//Delete an element from an array.
#include<stdio.h>
int main(void){ 
    int n, i, position;    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }   
    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &position);
    if(position < 0 || position >= n){
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the left to overwrite the deleted element
    for(i = position; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    printf("The array after deletion is:\n");
    for(i = 0; i < n - 1; i++){
        printf("%d\n", arr[i]);
    }
    return 0;   
}   