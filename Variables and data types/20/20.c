#include <stdio.h>

int main() {
    int quantity = 3;
    float unit_price = 15.75f;
    char code = 'A';

    printf("Item Code: %c, Quantity: %d, Total Price: $%.02f\n", code, quantity, quantity*unit_price);

    return 0;
}