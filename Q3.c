#include <stdio.h>

int main() {
    int stock[10]   = {50, 12, 30, 5, 80, 20, 9, 45, 15, 60};
    int minimum[10] = {40, 20, 30, 10, 60, 25, 10, 30, 15, 50};
    int reorderQuantity, largestReorder = 0, largestProduct = 0, total = 0;

    for (int i = 0; i < 10; i++) {
        if (stock[i] < minimum[i]) {
            reorderQuantity = minimum[i] - stock[i];
            total += reorderQuantity;

            printf("Product no. %d needs to be reordered: %d units\n", i + 1, reorderQuantity);

            if (reorderQuantity > largestReorder) {
                largestReorder = reorderQuantity;
                largestProduct = i + 1;
            }
        }
        else {
            printf("Product no. %d does not need to be reordered\n", i + 1);
        }
    }

    printf("\nTotal reorder quantity: %d\n", total);

    if (largestProduct == 0)
        printf("No product needs reordering\n");
    else
        printf("Largest reorder: product no. %d with %d units\n", largestProduct, largestReorder);

    return 0;
}