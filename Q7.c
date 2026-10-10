#include <stdio.h>
int main() {
    float dataUsed, pricePerGB;
    printf("Enter data used (GB): ");
    scanf("%f", &dataUsed);
    printf("Enter price per GB: ");
    scanf("%f", &pricePerGB);

    float basicCost = dataUsed * pricePerGB;
    float discountRate = 0;

    if (dataUsed >= 50 && dataUsed <= 99)
        discountRate = 5;
    else if (dataUsed >= 100 && dataUsed <= 199)
        discountRate = 10;
    else if (dataUsed >= 200)
        discountRate = 15;

    float discountAmount = basicCost * discountRate / 100;
    float finalCost = basicCost - discountAmount;

    printf("\nBasic Cost: %.2f\n", basicCost);
    printf("Discount Amount (%.0f%%): %.2f\n", discountRate, discountAmount);
    printf("Final Cost: %.2f\n", finalCost);

    return 0;
}