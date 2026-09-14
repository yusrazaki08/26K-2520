#include <stdio.h>
int main() {
    int Total;
    int Missing;
    int Duplicate;
    float MissingPercentage;
    float DuplicatePercentage;

    printf("Enter total number of records: ");
    scanf("%d", &Total);

    printf("Enter missing records: ");
    scanf("%d", &Missing);

    printf("Enter number of duplicate records: ");
    scanf("%d", &Duplicate);

    MissingPercentage = (Missing/Total)*100;
    DuplicatePercentage = (Duplicate/Total)*100; 

    if (Total <= 0)
    {
        printf("Invalid Dataset");
    }else if (Missing > 30)
    {
        printf("Poor Dataset");
    }else if (MissingPercentage <= 30 && DuplicatePercentage > 20)
    {
        printf("Dataset requires cleaning");
    }else{
        printf("Dataset is ready for training");
    }
return 0;
}