#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUCTS 100
#define MAX_DAYS 7

struct product {
    char id[10];
    char name[50];
    double price;
    int quantity_sold[MAX_DAYS];
};

int main() {
    // Open the input files
    FILE *product_file = fopen("product.txt", "r");
    FILE *sale_file = fopen("sale.txt", "r");
    if (!product_file || !sale_file) {
        printf("Error: Could not open input files\n");
        return 1;
    }

    // Read the products data from the input file
    struct product products[MAX_PRODUCTS];
    int product_count = 0;
    while (fscanf(product_file, "%*s %*[^\t\n] %lf", &products[product_count].price) != EOF) {
        printf("%lf\n", products[product_count].price);
		product_count++;
    }

    // Read the sales data from the input file and calculate total revenue
    double total_revenue = 0;
    int day, i;
    for (day = 0; day < MAX_DAYS; day++) {
        for ( i = 0; i < product_count; i++) {
            products[i].quantity_sold[day] = 0;
        }
        int sale_count = 0;
        while (fscanf(sale_file, "%d", &sale_count) == 1) {
            for ( i = 0; i < sale_count; i++) {
                int product_index;
                if (fscanf(sale_file, "%d", &product_index) == 1 && product_index < product_count) {
                    products[product_index].quantity_sold[day]++;
                    total_revenue += products[product_index].price;
                }
            }
        }
        rewind(sale_file);
    }

    // Write the report to the output file
    FILE *report_file = fopen("report.txt", "w");
    if (!report_file) {
        printf("Error: Could not open output file\n");
        return 1;
    }
    for ( i = 0; i < product_count; i++) {
        double revenue = 0;
        for ( day = 0; day < MAX_DAYS; day++) {
            revenue += products[i].quantity_sold[day] * products[i].price;
        }
        fprintf(report_file, "%s\t%s\t%.2lf\t%.2lf\n", products[i].id, products[i].name, products[i].price, revenue);
    }

    // Close the files
    fclose(product_file);
    fclose(sale_file);
    fclose(report_file);

    // Print the total revenue
    printf("Total revenue: %.2lf\n", total_revenue);

    return 0;
}

