#include <stdio.h>
int main() {
    float Accuracy;
    float Latency;
    int Approval;

    printf("Enter Model Accuracy: ");
    scanf("%f", &Accuracy);

    printf("Enter Prediction Latency(in milisecond): ");
    scanf("%f", &Latency);
    getchar();

    printf("Enter Model Approval status(1 or 0): ");
    scanf("%d", &Approval);

    if (Accuracy < 90)
    {
        printf("Accuracy is too low\n");
    }
    if (Latency > 100)
    {
        printf("Latency is too high\n");
    }
    if (Approval == 0)
    {
        printf("Model is not approved\n");
    }
    if (Accuracy >= 90 && Latency <= 100 && Approval == 1) {
        printf("Model can be deployed");
    }

return 0;
}