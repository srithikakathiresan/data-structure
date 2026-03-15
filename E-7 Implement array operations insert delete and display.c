#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1.Insert\n2.Delete\n3.Display\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
            printf("Enter position to insert: ");
            scanf("%d", &pos);

            printf("Enter value to insert: ");
            scanf("%d", &value);

            for(i = n; i >= pos; i--) {
                arr[i] = arr[i-1];
            }

            arr[pos-1] = value;
            n++;
            break;

        case 2:
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            for(i = pos-1; i < n-1; i++) {
                arr[i] = arr[i+1];
            }

            n--;
            break;

        case 3:
            printf("Array elements are:\n");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            break;

        default:
            printf("Invalid choice");
    }

    printf("\nFinal Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
