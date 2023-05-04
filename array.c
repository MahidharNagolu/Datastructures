#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, n, pos, val, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

   
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("\nThe array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    do {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               
                printf("\nEnter the position and value to insert: ");
                scanf("%d %d", &pos, &val);
                if (pos < 1 || pos > n+1) {
                    printf("Invalid position!\n");
                } else {
                    
                    for (i = n; i >= pos; i--) {
                        arr[i] = arr[i-1];
                    }
                 
                    arr[pos-1] = val;
                   
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
               
                printf("\nEnter the position to delete: ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                   
                    for (i = pos-1; i < n-1; i++) {
                        arr[i] = arr[i+1];
                    }
                   
                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 3:
              
                printf("\nThe array is: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 4:
               
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
