#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    double price;
    int available; // 1 = наличен, 0 = използван
};

struct Order {
    char address[100];
    int productId;
};

int main() {
    struct Product* products = NULL;
    int productCount = 0;

    struct Order* waitingOrders = NULL;
    int waitingOrderCount = 0;

    char command[10];

    while (1) {
        scanf("%s", command);

        if (strcmp(command, "END") == 0) {
            break;
        } else if (strcmp(command, "Product") == 0) {
            char name[50];
            double price;
            int id;
            scanf("%s %lf %d", name, &price, &id);

            products = realloc(products, (productCount + 1) * sizeof(struct Product));
            strcpy(products[productCount].name, name);
            products[productCount].price = price;
            products[productCount].id = id;
            products[productCount].available = 1;

            for (int i = 0; i < waitingOrderCount; i++) {
                if (waitingOrders[i].productId == id) {
                    printf("Client %s ordered %s\n", waitingOrders[i].address, name);
                    products[productCount].available = 0;

                    for (int j = i; j < waitingOrderCount - 1; j++) {
                        waitingOrders[j] = waitingOrders[j + 1];
                    }
                    waitingOrderCount--;
                    waitingOrders = realloc(waitingOrders, waitingOrderCount * sizeof(struct Order));
                    break;
                }
            }

            productCount++;

        } else if (strcmp(command, "Order") == 0) {
            char address[100];
            int id;
            scanf("%s %d", address, &id);

            int found = 0;
            for (int i = 0; i < productCount; i++) {
                if (products[i].id == id && products[i].available) {
                    printf("Client %s ordered %s\n", address, products[i].name);
                    products[i].available = 0;
                    found = 1;
                    break;
                }
            }

            if (!found) {
                waitingOrders = realloc(waitingOrders, (waitingOrderCount + 1) * sizeof(struct Order));
                strcpy(waitingOrders[waitingOrderCount].address, address);
                waitingOrders[waitingOrderCount].productId = id;
                waitingOrderCount++;
            }
        }
    }

    free(products);
    free(waitingOrders);

    return 0;
}
