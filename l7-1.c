#include <stdio.h>

double calculateBalance(double principal, int years) {
    if (years == 0) { // base case
        return principal;
    }
    else { // recursive case
        double interest = 0.05 * principal;
        double newBalance = principal + interest;
        return calculateBalance(newBalance, years-1);
    }
}

int main() {
    double principal = 10000.0;
    int years = 30;
    double balance = calculateBalance(principal, years);
    printf("Balance after %d years: %.2lf baht\n", years, balance);
    return 0;
}

