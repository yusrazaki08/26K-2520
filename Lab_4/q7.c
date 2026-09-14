#include <stdio.h>
int main() {
    int Data;
    int Price;
    int OrignalCost;
    int Discount;
    int DiscountedAmount;
    int FinalCost;

    printf("Enter Data used (in GB): ");
    scanf("%d", &Data);

    printf("Enter Price per GB: ");
    scanf("%d", &Price);

    OrignalCost = Data * Price;

    if (Data < 50)
    {
        Discount = 0;
    }else if (Data >= 50 && Data <=99)
    {
        Discount = 0.05;
    }else if (Data >= 100 && Data <=199)
    {
        Discount = 0.10;
    }else if (Data >= 200)
    {
        Discount = 0.15;
    }
    
    DiscountedAmount = OrignalCost * Discount;
    FinalCost = OrignalCost - DiscountedAmount;

    printf("\nOrignal Cost: %.2f\n", OrignalCost);
    printf("Discounted Amount: %.2f\n", DiscountedAmount);
    printf("Final Cost: %.2f\n", FinalCost);

return 0;
}