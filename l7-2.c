#include <stdio.h>

double calculateOil(double currentOil, int yearsLeft) {
    if (yearsLeft == 0) { // base case
        return currentOil;
    }
    else { // recursive case
        double consumedOil = 0.1 * currentOil;
        double newOil = currentOil - consumedOil;
        return calculateOil(newOil, yearsLeft-1);
    }
}

int main() {
    double currentOil = 25.0; // in million barrels
    int yearsLeft = 16; // from 2021 to 2037
    double remainingOil = calculateOil(currentOil, yearsLeft);
    printf("Oil remaining in 2037: %.2lf million barrels\n", remainingOil);
    return 0;
}

